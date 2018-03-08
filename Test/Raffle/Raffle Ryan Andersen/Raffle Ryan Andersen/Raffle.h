#pragma once
#include "Person.h"
#include "List.h"
#include "Algorithms.h"

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

private:
	List registrants;
	vector<Prize> prizes;
};

