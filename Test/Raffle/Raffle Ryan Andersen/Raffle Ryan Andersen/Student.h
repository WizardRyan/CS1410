#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(string f, string l, string g, string sClass, int age);
	~Student();

	void setPrize(Prize* prize);
	Prize getPrize();
	virtual void printInfo();

	const Role role = Role::Student;

private:
	string sClass;
	int age = 0;
	Prize* prize = NULL;
};

