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

void Airplane::addPassengers(int type, int num, int pref)
{
	bool seatsWereAvailable = false;

	for (int i = 0; i < this->seatGroups.size(); i++) {
		//were seats available?
		if (!seatsWereAvailable) {
			//is the group size bigger than the number of seats available?
			if (!(num > seatGroups[i].getNumOfSeats())) {
				for (int k = 0; k < this->seatGroups[i].getNumOfSeats(); k++) {
					//is the seat a first class, and if so, is the caller a first class flyer?
					if (seatGroups[i].getSeats()[k]->type == type && type == Seat::First) {
						//does the seat match the flyer's preference?
					}
				}
			}
		}
	}
}
