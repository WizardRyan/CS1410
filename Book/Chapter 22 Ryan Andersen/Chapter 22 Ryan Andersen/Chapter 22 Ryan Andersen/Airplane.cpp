#include "Airplane.h"



Airplane::Airplane()
{
	int positionNum = -1;

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
		this->seats.push_back(Seat(Seat::First, position));
	}

		positionNum = -1;
	
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

	cout << "First Class: " << endl;
	for (int i = 0; i < NUM_OF_FIRST; i+= 4) {
		cout << this->seats[i].hasPassenger
			 << this->seats[i + 1].hasPassenger
			 << " " 
			 << this->seats[i + 2].hasPassenger 
			 << this->seats[i + 3].hasPassenger 
			 << endl;
	}
	cout << endl << endl
		<< "Economy: " << endl;
	for (int i = NUM_OF_FIRST; i < NUM_OF_ECONOMY + NUM_OF_FIRST; i += 6) {
		cout << this->seats[i].hasPassenger
			 << this->seats[i + 1].hasPassenger
			 << this->seats[i + 2].hasPassenger
			 << " " 
			 << this->seats[i + 3].hasPassenger
			 <<  this->seats[i + 4].hasPassenger
			 << this->seats[i + 5].hasPassenger 
			 << endl;
	}
}

void Airplane::addPassengers(int type, int num, int pref)
{
	bool seatsWereAvailable = false;

	for (int i = 0; i < seats.size(); i++) {
		if(!seatsWereAvailable){
			if (!seats[i].hasPassenger) {
				if (seats[i].position == pref) {
					if (type == seats[i].type && type == Seat::First) {
						if (num == 1) {
							seats[i].hasPassenger = true;
							seatsWereAvailable = true;
						}
						else {
							if (!seats[i + 1].hasPassenger) {
								seats[i].hasPassenger = true;
								seats[i + 1].hasPassenger = true;
								seatsWereAvailable = true;
							}
							i++;
						}
					}

					else if (type == seats[i].type && type == Seat::Economy) {
						if (num == 1) {
							seats[i].hasPassenger = true;
						}
						else if (num == 2) {
							if (!seats[i + 1].hasPassenger) {
								seats[i].hasPassenger = true;
								seats[i + 1].hasPassenger = true;
								seatsWereAvailable = true;
							}
							i++;
						}

						else if (num == 3) {
							if (!(seats[i + 1].hasPassenger || seats[i + 2].hasPassenger)) {
								seats[i].hasPassenger = true;
								seats[i + 1].hasPassenger = true;
								seats[i + 2].hasPassenger = true;
								seatsWereAvailable = true;
							}
							i += 2;
						}
					}
				}
			}
		}
	}
	cout << endl << (seatsWereAvailable ? "Seats were added successfully!" : "There were no available seats") << endl << endl;
}
