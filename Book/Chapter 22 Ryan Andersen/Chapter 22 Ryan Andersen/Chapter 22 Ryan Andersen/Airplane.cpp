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
		this->seats.push_back(Seat(Seat::First, position));
		fillGroup++;
		if (fillGroup == this->FIRST_SEAT_GROUP_SIZE) {
			vector<Seat*> s;
			s.push_back(&(this->seats[i]));
			s.push_back(&(this->seats[i - 1]));
			this->seatGroups.push_back(SeatGroup(s));
			fillGroup = 0;
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
		this->seats.push_back(Seat(Seat::Economy, position));
		fillGroup++;
		if (fillGroup == this->ECONOMY_SEAT_GROUP_SIZE) {
			vector<Seat*> s;
			for (int k = 0; k < this->ECONOMY_SEAT_GROUP_SIZE; k++) {
				s.push_back(& (this->seats[i - k]));
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

void Airplane::addPassengers(int type, int num, int pref)
{
	/*bool seatsWereAvailable = false;

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
	}*/
	//cout << endl << (seatsWereAvailable ? "Seats were added successfully!" : "There were no available seats") << endl << endl;
}
