#pragma once
#include <string>
#include "Shared.h"
using namespace std;
class Prize
{
public:
	Prize(string name, string companyName, Role role);
	~Prize();

	string getName();
	void setName(string name);
	string getCompanyName();
	void setCompanyName(string name);

private:
	string name;
	string companyName;
	Role role;
};

