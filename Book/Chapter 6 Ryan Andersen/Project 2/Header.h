//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once

#include <iostream>

using namespace std;
const int MAX_SIZE = 10;

struct WrapArray {
	int numArray[MAX_SIZE][MAX_SIZE];
};

void callFillIt(int arr[MAX_SIZE][MAX_SIZE], int maxNum);

void fillIt(int arr[MAX_SIZE][MAX_SIZE], int index, int num, int maxNum);
