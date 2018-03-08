#include "Student.h"


Student::Student(string f, string l, string g, string sClass, int age) : Person(f, l, g), sClass{ sClass }, age{ age }
{
}

Student::~Student()
{
}

void Student::setPrize(Prize * prize)
{
	this->prize = prize;
}

Prize Student::getPrize()
{
	return *(this->prize);
}

void Student::printInfo()
{
	cout << "Name: " << this->getFirstName() << " " << this->getLastName() << endl
		<< "Gender: " << this->getGender() << endl
		<< "Age: " << this->age << endl
		<< "Class: " << this->sClass << endl
		<< "Prize: " << (this->prize ? "No Prize" : this->prize->getName());
}
