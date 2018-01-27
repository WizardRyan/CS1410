#pragma once

#include "Seat.h"
#include <vector>
#include <iostream>

using namespace std;

class SeatGroup
{
public:
	SeatGroup();
	SeatGroup(vector<Seat*> s);

	~SeatGroup();

	void addSeat(Seat* s);

	int getNumOfSeats() const;

	void printSeats() const;

	vector<Seat*> getSeats() const;

private:
	vector<Seat*> seats;

};

