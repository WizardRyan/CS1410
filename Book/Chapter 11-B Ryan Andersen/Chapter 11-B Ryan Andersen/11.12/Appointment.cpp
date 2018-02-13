//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Appointment.h"


Appointment::Appointment(year_month_day date, int stime, int etime, string description) : date{ date }, startingTime{ stime }, endingTime{ etime }, description { description }
{
}

Appointment::~Appointment()
{
}
