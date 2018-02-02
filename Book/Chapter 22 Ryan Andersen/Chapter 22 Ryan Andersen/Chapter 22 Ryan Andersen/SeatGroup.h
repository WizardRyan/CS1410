
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
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

	//the addSeat function, adds a seat pointer the vector of seat pointers in the SeatGroup
	//accepts s, the seat pointer to be added
	//no return
	void addSeat(Seat* s);

	//the getNumOfSeats function, gets the number of seats in the SeatGroup
	//no parameters
	//returns the number of seats
	int getNumOfSeats() const;

	//the getNumOfAvailableSeats function, returns the number of available seats
	//no parameters
	//returns the num of available seats
	int getNumOfAvailableSeats() const;

	//the getTypeOfSeatGroup function, returns the type of seat group (First vs Economy)
	//no parameters
	//returns the seatGroup's type
	Seat::ClassType getTypeOfSeatGroup() const;

	//the getAvailableSeats function, gets the available seats
	//no parameters
	//returns a vector of seat pointers containing the available seats
	vector<Seat*> getAvailableSeats() const;

	//the availableSeatsAreConsecutive function, tests if the available seats are next to each other
	//no parameters
	//returns a bool, true if they are consecutive, false if not
	bool availableSeatsAreConsecutive() const;

	//the printSeats function, prints the seats in the group
	//no parameters
	//no return
	void printSeats() const;

	//the getSeats function, gets the seats contained in the seatGroup
	//no parameters
	//returns a vector of seat pointers contained within the seatGroup
	vector<Seat*> getSeats() const;

private:
	vector<Seat*> seats;

};

