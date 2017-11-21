//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once

#include <iostream>
#include <algorithm>

using namespace std;
const int MAX_SIZE = 50;

//allows a classic array to be returned
struct WrapArray {
	int nums[MAX_SIZE][MAX_SIZE];
};

//makes it easer to call the fillIt function, by filling in the fillIt's parameters
//accepts maxNum, the number the user entered
//returns the result of the fillIt function
WrapArray callFillIt(int maxNum);

//fills a 2d array with data that's cool to look at
//takes in a WrappArray struct, index and num (where to go to fill the data) and the maxNum (how long to iterate for)
//returns a WrappArray struct, with the nums array inside
WrapArray fillIt(WrapArray arr, int index, int num, int maxNum);
