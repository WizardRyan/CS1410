#pragma once
#include "Person.h"
#include <list>

class Raffle
{
public:
	Raffle();
	~Raffle();
	
	Person* findRegistrant(string fname, string lname);
	int addRegistrant(Person* person);
	void addToSortedRegistrants(Person* person);
	void manualAddRegistrant(Person* p, int position);
	void addPrize(Prize p);
	void distributeRaffle();

private:
	list<Person*> registrants;
	vector<Person*> sortedRegistrants;
	list<Prize> prizes;
};

