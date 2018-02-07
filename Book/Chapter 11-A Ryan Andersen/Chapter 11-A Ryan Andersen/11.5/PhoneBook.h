//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Person.h"
#include <vector>
#include <iostream>
#include <fstream>
#include "util.h"


//the initFile function, fills a file with names and random numbers
//no parameters
//returns a vector of Persons read from the file
vector<Person> initFile();
