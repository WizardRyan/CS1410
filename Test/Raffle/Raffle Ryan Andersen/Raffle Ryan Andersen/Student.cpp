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

Prize* Student::getPrize()
{
	return this->prize;
}

void Student::printInfo()
{
	string name =  Person::getLastName() + " " + Person::getFirstName()  ;

	cout << "Name: " << name << endl;
	cout << "Gender: " << Person::getGender() << endl;
	cout << "Age: " << this->age << endl;
	cout << "Class: " << this->sClass << endl;
	cout << "Prize: " << (this->prize == NULL ? "No Prize" : this->prize->getName());
}

Role Student::getRole()
{
	return this->role;
}
