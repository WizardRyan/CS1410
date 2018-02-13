//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <string>
#include "../../date/include/date/date.h"
#include <vector>

using namespace date;
using namespace std;
class Appointment
{
public:
	Appointment(year_month_day date, int stime, int etime, string description);
	~Appointment();

	string description;
	year_month_day date;
	int startingTime;
	int endingTime;

};

