// Author: Ryan Andersen
// Assignment: lab 04
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/18/17
// Description: a class for creating a rectangle object

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>


using namespace std;

//this class models a rectangle, with a height and a width. It can return rec area, height, and width.
class MyRectangle {

private:
	int height;
	int width;

public:
	MyRectangle();
	MyRectangle(int h, int w);

	int getHeight();
	int getWidth();
	int getArea();

};