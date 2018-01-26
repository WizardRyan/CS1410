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

void SeatGroup::printSeats() const
{
	for (int i = 0; i < this->seats.size(); i++) {
		cout << this->seats[i]->hasPassenger;

	}
}
