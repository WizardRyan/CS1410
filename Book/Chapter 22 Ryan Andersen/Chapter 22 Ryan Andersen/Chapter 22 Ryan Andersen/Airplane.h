
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <vector>
#include <iostream>
#include "Seat.h"
#include "SeatGroup.h"

using namespace std;

//a class representing an airplane with seats and seat groups
class Airplane
{
public:
	Airplane();
	~Airplane();
	
	//the addPassengers function. Calls the addPassengersRecursive and passes in the needed paramters
	//accepts type, the type of seat (First vs Economy), num, the num of passengers, and pref, the flyer's preferred seat
	//no return
	void addPassengers(int type, int num, int pref);


	void showSeating();


private:
	vector<Seat *> seats;
	vector<SeatGroup> seatGroups;
	const int NUM_OF_FIRST = 20;
	const int NUM_OF_ECONOMY = 180;
	const int FIRST_SEAT_GROUP_SIZE = 2;
	const int ECONOMY_SEAT_GROUP_SIZE = 3;

	//the assignGroup function, assigns a group of passengers to a seatGroup
	//accepts i, the current seat group indes, num, the num of passengers to assing, and pref, the seating preference
	void assignGroup(int i, int num, int pref);

	//the addPasssengersRecursive function, assigns passengers to their seats
	//accepts, ... success - did it successfully add passengers, split - should it split the passengers, firstAvailable - should it assign to the first seat available, and failure - were there no seats
	//no return
	void addPassengersRecursive(int type, int num, int pref, bool success, bool split, bool firstAvailable, bool failure);


};

