#include "Raffle.h"



Raffle::Raffle()
{
}


Raffle::~Raffle()
{
}

int Raffle::addRegistrant(Person * person)
{
	this->registrants.push_back(person);

	return 0;
}
