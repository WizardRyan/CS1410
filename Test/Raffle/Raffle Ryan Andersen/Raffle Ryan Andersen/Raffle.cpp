#include "Raffle.h"



Raffle::Raffle()
{
}


Raffle::~Raffle()
{
}

Person * Raffle::findRegistrant(string fname, string lname)
{
	vector<Person*>people;
	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()); pos.next()) {
		people.push_back(pos.get());
	}

	int index = -1;
	merge_sort_people(people, 0, people.size() -1);
	bool found = binary_search_people(people, 0, people.size() - 1, lname + fname, index);
	Person* noOne = NULL;

	return found ? people[index] : noOne;
}

int Raffle::addRegistrant(Person * person)
{
	this->registrants.push_back(person);

	return this->registrants.get_size();
}

void Raffle::manualAddRegistrant(Person * p, int position)
{
	int count = 0;
	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()); pos.next()) {
		if (count == position) {
			this->registrants.insert(pos, p);
			break;
		}
		count++;
	}
}

void Raffle::addPrize(Prize p)
{
	this->prizes.push_back(p);
}

void Raffle::printChronoRegistrants()
{

	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()); pos.next()) {
		cout << endl; 
		Person* person = pos.get();
		person->printInfo();
		cout << endl;
	}
}

void Raffle::printSortedRegistrants()
{
	vector<Person*>people;
	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()); pos.next()) {
		people.push_back(pos.get());
	}

	merge_sort_people(people,0, people.size() -1);

	for (auto p : people) {
		cout << endl;
		p->printInfo();
		cout << endl;
	}
}

void Raffle::distributeRaffle()
{

	//first 100 get JCW's
	int i = 0;
	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()) && i < 100; i++, pos.next()) {
		pos.get()->setMeal(true);
	}
	
	//go through all prizes
	for (list<Prize>::iterator it = this->prizes.begin(); it != this->prizes.end() && this->prizes.size() != 0;) {

		//go through all people until valid one is found or end of list is reached
		bool prizeAssigned = false;
		for (Iterator pos = this->registrants.begin(); prizeAssigned == false && !pos.equals(this->registrants.end()); pos.next()) {
			//if current person has type of current prize, or prize is assignable to any role, assign prize to person, remove prize from list, add winner to winner list.
			if (it->getRole() == pos.get()->getRole() || it->getRole() == Role::Any) {
				
				Prize prize = *it;
				Prize* prizePtr = new Prize(prize.getName(), prize.getCompanyName(), prize.getRole());
				pos.get()->setPrize(prizePtr);
				this->winners.push_back(pos.get());
				it = this->prizes.erase(it);
				prizeAssigned = true;
			}
		}
		if (!prizeAssigned) {
			it++;
		}
	}

}

void Raffle::printWinners()
{
	for (Iterator pos = this->winners.begin(); !pos.equals(this->winners.end()); pos.next()) {
		cout << endl;
		pos.get()->printInfo();
		cout << endl;
	}
}

