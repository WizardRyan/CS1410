#pragma once
#include <vector>
#include <iostream>
#include "Seat.h"

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
	const int NUM_OF_FIRST = 20;
	const int NUM_OF_ECONOMY = 180;
};

