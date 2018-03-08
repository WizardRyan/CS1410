#pragma once
#include "Person.h"

class Faculty :
	public Person
{
public:
	Faculty(string fname, string lname, string gender, int years, string subject);
	~Faculty();
	void setYears(int years);
	int getYears();
	void setSubject(string sub);
	string getSubject();
	void setPrize(Prize* prize);
	Prize getPrize();

	virtual void printInfo();

	const Role role = Role::Faculty;

private:
	int yearsOfService;
	string subjectArea;
	Prize* prize = NULL;
};

