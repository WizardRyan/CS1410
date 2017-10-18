// Author: Ryan Andersen
// Assignment: lab 04
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/18/17
// Description: aconsole program for instantiating and displaying a rectangle object

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "MyRectangle.h"



int main(){

	MyRectangle rec(4, 7);

	cout << "The rectangle's height is: " << rec.getHeight() <<
		endl << "The rectangle's width is: " << rec.getWidth() <<
		endl << "The rectangle's area is: " << rec.getArea() << endl << endl;


	system("pause");
    return 0;
}

