//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

//declaring a struct so I can actually return the array
struct charArr {
	char name[14];
};

//the reverseIt function, reverses a character array
//takes in arr, the array to be reversed
//returns a charArry struct, with the arr stored in the structs .name
charArr reverseIt(char arr[]);