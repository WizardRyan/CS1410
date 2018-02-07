//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#ifndef UTIL_H
#define UTIL_H

#include <vector>
#include "Employee.h"
using namespace std;

/**
Swaps two integers.
 @param x the first integer to swap
 @param y the second integer to swap
 */
 void swap(int& x, int& y);

 /**
 16 Prints all elements in a vector.
 17 @param a the vector to print
 18 */
 void print(vector<Employee> a);

 /**
 22 Sets the seed of the random number generator.
 23 */
 void rand_seed();

 /**
 27 Computes a random integer in a range.
 28 @param a the bottom of the range
 29 @param b the top of the range
 30 @return a random integer x, a <= x and x <= b
 31 */
 int rand_int(int a, int b);

 #endif