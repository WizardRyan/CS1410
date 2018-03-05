#include "Person.h"


Person::Person(string fname, string lname, string gender) : firstName{ fname }, lastName{lname}, gender{gender}
{
}

Person::~Person()
{
}

string Person::getFullName()
{
	return this->firstName + " " + this->lastName;
}

void Person::setFullName(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

string Person::getGender()
{
	return this->gender;
}

void Person::setGender(string gender)
{
	this->gender = gender;
}

string Person::getFirstName()
{
	return this->firstName;
}

void Person::setFirstName(string name)
{
	this->firstName = name;
}

string Person::getLastName()
{
	return this->lastName;
}

void Person::setLastName(string name)
{
	this->lastName = name;
}



