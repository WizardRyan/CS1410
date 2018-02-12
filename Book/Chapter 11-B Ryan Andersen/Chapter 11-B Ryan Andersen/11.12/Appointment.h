#pragma once
#include <string>
#include "../../date/include/date/date.h"
#include <vector>

using namespace date;
using namespace std;
class Appointment
{
public:
	Appointment(year_month_day date, int time, string description);
	~Appointment();

	string description;
	year_month_day date;
	int time;

};

