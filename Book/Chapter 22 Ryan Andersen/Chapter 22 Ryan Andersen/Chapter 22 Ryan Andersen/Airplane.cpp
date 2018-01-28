
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Airplane.h"



Airplane::Airplane()
{
	int positionNum = -1;
	int fillGroup = 0;

	for (int i = 0; i < NUM_OF_FIRST; i++) {
		positionNum++;
		Seat::Position position;
		switch (positionNum) {
		case 0:
			position = Seat::Window;
			break;
		case 1:
			position = Seat::Aisle;
			break;
		case 2:
			position = Seat::Aisle;
			break;
		case 3:
			position = Seat::Window;
			positionNum = -1;
			break;
		}
		this->seats.push_back(new Seat(Seat::First, position));
		fillGroup++;
		if (fillGroup == this->FIRST_SEAT_GROUP_SIZE) {
			vector<Seat*> s;
			s.push_back(this->seats[i - 1]);
			s.push_back(this->seats[i]);
			this->seatGroups.push_back(SeatGroup(s));
			fillGroup = 0;
			s.clear();
		}
	}

		positionNum = -1;
		fillGroup = 0;
	
	for (int i = 0; i < NUM_OF_ECONOMY; i++) {
		positionNum++;
		Seat::Position position;
		switch (positionNum) {
		case 0:
			position = Seat::Window;
			break;
		case 1:
			position = Seat::Center;
			break;
		case 2:
			position = Seat::Aisle;
			break;
		case 3:
			position = Seat::Aisle;
			break;
		case 4:
			position = Seat::Center;
			break;
		case 5:
			position = Seat::Window;
			positionNum = -1;
			break;
		}
		this->seats.push_back(new Seat(Seat::Economy, position));
		fillGroup++;
		if (fillGroup == this->ECONOMY_SEAT_GROUP_SIZE) {
			vector<Seat*> s;
			for (int k = ECONOMY_SEAT_GROUP_SIZE - 1; k >= 0; k--) {
				s.push_back(this->seats[i + NUM_OF_FIRST - k]);
				k;
			}

			this->seatGroups.push_back(SeatGroup(s));
			fillGroup = 0;
		}
	}
}

Airplane::~Airplane()
{

}

void Airplane::showSeating() {

	for (int i = 0; i < this->seatGroups.size(); i += 2) {
		this->seatGroups[i].printSeats();
		cout << " ";
		this->seatGroups[i + 1].printSeats();
		cout << endl;

	}

}

void Airplane::addPassengersRecursive(int type, int num, int pref, bool success, bool split, bool firstAvailable, bool failure)
{
	bool seatsWereAssigned = false;

	if (success) {
		cout << "Seats added succesfully!" << endl;
		return;
	}
	
	else if (failure) {
		cout << endl << "There weren't enough available seats." << endl;
		return;
	}

	if (!firstAvailable) {
		for (int i = 0; i < this->seatGroups.size(); i++) {
			if (!seatsWereAssigned) {
				//do the seats class match the flyer's class? (Economy or First)
				if (static_cast<int>(seatGroups[i].getTypeOfSeatGroup()) == type) {
					//are there enough available seats in that group for the group to fit?
					if (seatGroups[i].getNumOfAvailableSeats() >= num) {
						bool matchesPref = false;
						for (int k = 0; k < seatGroups[i].getNumOfAvailableSeats(); k++) {
							//do one of the available seats match the flyer's preference?
							if (seatGroups[i].getAvailableSeats()[k]->position == pref) {
								if(split){
									//force groups to split up. Assign them to the first available seat that matches their pref
									assignGroup(i, num, pref);
									seatsWereAssigned = true;
									cout << endl <<  "(group had to be split)" << endl;
								}
								else {
									//are those seats next to each other?
									if (seatGroups[i].availableSeatsAreConsecutive()) {
										//sucess! the group will be seated next to each other in the preffered seat
										assignGroup(i, num, pref);
										seatsWereAssigned = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	else {
		//assign to the first seat available
		//are there enough seats?
		int seatNums = 0;
		for (int i = 0; i < this->seats.size(); i++) {
			if (this->seats[i]->hasPassenger == false) {
				seatNums++;
			}
		}

		//if so, assign them
		if (seatNums >= num) {
			int seatsAssigned = 0;
			for (int i = 0; i < this->seats.size(); i++) {
				if (seatsAssigned < num) {
					if (this->seats[i]->hasPassenger == false) {
						this->seats[i]->hasPassenger = true;
						seatsAssigned++;
					}
				}
			}
			cout << endl << "(Flyer was assigned to first available seat)" << endl;
			seatsWereAssigned = true;
		}
	}

	if (seatsWereAssigned) {
		addPassengersRecursive(type, num, pref, true, false, false, false);
	}
	else if (!split) {
		addPassengersRecursive(type, num, pref, false, true, false, false);
	}
	else if (!firstAvailable) {
		addPassengersRecursive(type, num, pref, false, false, true, false);
	}
	else if (!failure) {
		addPassengersRecursive(type, num, pref, false, false, false, true);
	}

}

void Airplane::addPassengers(int type, int num, int pref) {
	addPassengersRecursive(type, num, pref, false, false, false, false);
}

void Airplane::assignGroup(int i, int num, int pref) {
	if (num == 1) {
		for (auto s : this->seatGroups[i].getAvailableSeats()) {
			if (s->position == pref) {
				s->hasPassenger = true;
			}
		}
	}
	else {
		vector<Seat *> seatsToAdd = seatGroups[i].getAvailableSeats();
		for (int s = 0; s < num; s++) {
			seatsToAdd[s]->hasPassenger = true;
		}
	}
}