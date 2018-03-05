#include "Prize.h"


Prize::Prize(string name, string companyName) : name{ name }, companyName{companyName}
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
