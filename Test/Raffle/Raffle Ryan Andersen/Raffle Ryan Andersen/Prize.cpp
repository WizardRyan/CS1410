#include "Prize.h"


Prize::Prize(string name, string companyName, Role role) : name{ name }, companyName{companyName}, role{role}
{
}

Prize::~Prize()
{
}

string Prize::getName()
{
	return this->name;
}

void Prize::setName(string name)
{
	this->name = name;
}

string Prize::getCompanyName()
{
	return this->companyName;
}

void Prize::setCompanyName(string name)
{
	this->companyName = name;
}

Role Prize::getRole()
{
	return this->role;
}
