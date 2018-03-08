#include "Faculty.h"

Faculty::Faculty(string fname, string lname, string gender, int years, string subject) : Person(fname, lname, gender), yearsOfService{ years }, subjectArea{ subject }
{
}

Faculty::~Faculty()
{
}

void Faculty::setYears(int years)
{
	this->yearsOfService = years;
}

int Faculty::getYears()
{
	return this->yearsOfService;
}

void Faculty::setSubject(string sub)
{
	this->subjectArea = sub;
}

string Faculty::getSubject()
{
	return this->subjectArea;
}

void Faculty::setPrize(Prize * prize)
{
	this->prize = prize;
}

Prize* Faculty::getPrize()
{
	return this->prize;
}

Role Faculty::getRole()
{
	return this->role;
}

void Faculty::printInfo()
{
	cout << "Name: " <<  Person::getLastName() + " " + Person::getFirstName() << endl
		<< "Gender: " << Person::getGender() << endl
		<< "Subject Area: " << this->subjectArea << endl
		<< "Prize: " << (this->prize == NULL ? "No prize" : this->prize->getName());
}
