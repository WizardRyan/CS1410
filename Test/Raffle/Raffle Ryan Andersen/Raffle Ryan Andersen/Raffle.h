#pragma once
#include "Person.h"
#include "List.h"
#include "Algorithms.h"
#include <list>

class Raffle
{
public:
	Raffle();
	~Raffle();
	
	Person* findRegistrant(string fname, string lname);
	int addRegistrant(Person* person);
	void manualAddRegistrant(Person* p, int position);
	void addPrize(Prize p);
	void printChronoRegistrants();
	void printSortedRegistrants();
	void distributeRaffle();
	void printWinners();

private:
	List registrants;
	List winners;
	list<Prize> prizes;
};

