#pragma once
#include <vector>
#include <iostream>
#include "Seat.h"
#include "SeatGroup.h"

using namespace std;

class Airplane
{
public:
	Airplane();
	~Airplane();
	void addPassengers(int type, int num, int pref);
	void showSeating();

private:
	vector<Seat> seats;
	vector<SeatGroup> seatGroups;
	const int NUM_OF_FIRST = 20;
	const int NUM_OF_ECONOMY = 180;
	const int FIRST_SEAT_GROUP_SIZE = 2;
	const int ECONOMY_SEAT_GROUP_SIZE = 3;

};

