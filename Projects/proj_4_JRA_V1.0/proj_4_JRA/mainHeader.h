//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include <iostream>

using namespace std;

//prints out the paycheck of an employee
//accepts e, an employee object, by constant reference
//no return
void printCheck(const Employee& e);

//prints out a character iteravely
//accepts c, the character to be printed, and num, the amount of times to print
//no return
void drawChar(char c, int num);