#include "Appointment.h"


Appointment::Appointment(year_month_day date, int time, string description) : date{ date }, time{ time }, description{description}
{
}

Appointment::~Appointment()
{
}
