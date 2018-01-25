#include "Airplane.h"



Airplane::Airplane()
{
	bool toggle = false;

	for (int i = 0; i < NUM_OF_FIRST; i++) {
		//switch between setting window seats and aisle seats
		if(toggle) {
			this->seats.push_back(Seat(Seat::First, static_cast<Seat::Position>(i % 2)));
		}
		else {
			this->seats.push_back(Seat(Seat::First, static_cast<Seat::Position>(i % 2)));
		}
		toggle = !toggle;
	}

	int positionNum = -1;
	
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
		this->seats.push_back(Seat(Seat::Economy, position));
	}
}

Airplane::~Airplane()
{
}

void Airplane::showSeating() {
	this->seats[12].hasPassenger = true;

	this->seats[199].hasPassenger = true;

	cout << "First Class: " << endl;
	for (int i = 0; i < NUM_OF_FIRST; i+= 4) {
		cout << this->seats[i].hasPassenger << this->seats[i + 1].hasPassenger << " " << this->seats[i + 2].hasPassenger << this->seats[i + 3].hasPassenger << endl;
	}
	cout << endl << endl
		<< "Economy: " << endl;
	for (int i = NUM_OF_FIRST; i < NUM_OF_ECONOMY + NUM_OF_FIRST; i += 6) {
		cout << this->seats[i].hasPassenger << this->seats[i + 1].hasPassenger  << this->seats[i + 2].hasPassenger << " " << this->seats[i + 3].hasPassenger <<  this->seats[i + 4].hasPassenger << this->seats[i + 5].hasPassenger << endl;
	}
}

void Airplane::addPassengers(int type, int num, int pref)
{
	for (auto s : this->seats) {
		if (!s.hasPassenger) {
			if (s.Aisle == type) {
				
			}

			else if (s.Economy == type) {

			}
		}

	}
}
