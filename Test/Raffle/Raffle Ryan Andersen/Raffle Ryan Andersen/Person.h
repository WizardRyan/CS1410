#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Prize.h"
#include "Shared.h"
using namespace std;

class Person
{
public:
	Person(string fname, string lname, string gender);
	~Person();

	string getFullName();
	void setFullName(string firstName, string lastName);
	string getGender();
	void setGender(string gender);
	string getFirstName();
	void setFirstName(string name);
	string getLastName();
	void setLastName(string name);
	bool hasJCW();
	void setMeal(bool hasMeal);
	

	virtual void setPrize(Prize* prize) = 0;
	virtual void printInfo() = 0;
	virtual Role getRole() = 0;
	
private:

	string firstName;
	string lastName;
	string gender;
	bool hasMeal;
};

