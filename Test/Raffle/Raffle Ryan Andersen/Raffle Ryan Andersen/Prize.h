#pragma once
#include <string>
using namespace std;
class Prize
{
public:
	Prize(string name, string companyName, int association);
	~Prize();

	string getName();
	void setName(string name);
	string getCompanyName();
	void setCompanyName(string name);

private:
	string name;
	string companyName;
	int association = 0;
};

