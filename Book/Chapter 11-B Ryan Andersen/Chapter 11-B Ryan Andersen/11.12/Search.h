#pragma once
#include "Appointment.h"

//the binary_search function, searches for a value in a vector. 
//If the value isn't found, but is within the range of elements, it sets m to the next largest element.
//Else, m = the size of the vector.
//accepts v, the vector to search, from, where to start the search, to, where to search to, value, the value to be looking for, and m, the param to be set according to the above description
//returns false if value isn't found, true if it is.
bool binary_search_appointments(vector<Appointment> v, int from, int to, Appointment value, int& m);