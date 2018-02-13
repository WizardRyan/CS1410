//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Appointment.h"

//the binary_search function, searches for a value in a vector. 
//If the value isn't found, but is within the range of elements, it sets m to the next largest element.
//Else, m = the size of the vector.
//accepts v, the vector to search, from, where to start the search, to, where to search to, value, the value to be looking for, and m, the param to be set according to the above description
//returns false if value isn't found, true if it is.
bool binary_search_appointments(vector<Appointment> v, int from, int to, Appointment value, int& m);

//the addAppointment function, adds an appointment to a vector in order
//accepts apps, the vector to be added to, and app, the appointment to add
//returns a bool, true if successfully added, false if it wasn't
bool addAppointment(vector<Appointment>& apps, Appointment app);

//the appointmentConflicts function, checks if two appointments conflict with each other (same day with any overlapping times)
//accepts a and b, the appointments to be compared
//returns a bool, true if they conflict with each other, false if they're good to go
bool appointmentConflicts(Appointment a, Appointment b);
