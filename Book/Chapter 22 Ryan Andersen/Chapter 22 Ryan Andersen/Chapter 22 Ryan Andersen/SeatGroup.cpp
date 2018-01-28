
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "SeatGroup.h"

SeatGroup::SeatGroup()
{
}

SeatGroup::SeatGroup(vector<Seat*> s) : seats{s}
{
}


SeatGroup::~SeatGroup()
{
}

void SeatGroup::addSeat(Seat* s)
{
	this->seats.push_back(s);
}

int SeatGroup::getNumOfSeats() const
{
	return this->seats.size();
}

int SeatGroup::getNumOfAvailableSeats() const
{
	return getAvailableSeats().size();
}

Seat::ClassType SeatGroup::getTypeOfSeatGroup() const
{
	return this->seats.size() == 2 ? Seat::First : Seat::Economy;
}

vector<Seat*> SeatGroup::getAvailableSeats() const
{
	vector<Seat*> availableSeats;

	for (int i = 0; i < this->seats.size(); i++) {
		if (!this->seats[i]->hasPassenger) {
			availableSeats.push_back(this->seats[i]);
		}
	}
	return availableSeats;
}

bool SeatGroup::availableSeatsAreConsecutive() const
{
	
	if (this->getNumOfAvailableSeats() == seats.size()) {
		return true;
	}

	else if (this->getNumOfAvailableSeats() == 1) {
		return false;
	}

	else {
		bool consecutive = true;

		for (int i = 0; i < this->seats.size() - 1; i++) {
			if (this->getAvailableSeats()[i]->position == this->seats[i]->position) {
				if (this->getAvailableSeats()[i + 1]->position == this->seats[i + 1]->position) {
					consecutive = true;
				}
			}

			else {
				consecutive = false;
			}
		}
		return consecutive;
	}
}

void SeatGroup::printSeats() const
{
	for (int i = 0; i < this->seats.size(); i++) {
		cout << this->seats[i]->hasPassenger;
	}
}

vector<Seat*> SeatGroup::getSeats() const
{
	return this->seats;
}
