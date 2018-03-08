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
	merge_sort_people(people);
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
		pos.get()->printInfo();
		cout << endl;
	}
}

void Raffle::printSortedRegistrants()
{
	vector<Person*>people;
	for (Iterator pos = this->registrants.begin(); !pos.equals(this->registrants.end()); pos.next()) {
		people.push_back(pos.get());
	}

	merge_sort_people(people);

	for (auto p : people) {
		cout << endl;
		p->printInfo();
		cout << endl;
	}
}

void Raffle::distributeRaffle()
{

}

