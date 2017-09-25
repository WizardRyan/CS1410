// Author: Ryan Andersen
// Assignment: Chapter 4
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/24/17
// Description: This Program gets the permiter and area of a specified circle

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include "ccc_win.h"

// Purpose: finds perimeter of circle
// Parameters: one circle, c
// Returns: a double of the permiter
// Pre-conditions: a circle is provided
double perimeter(Circle c);

// Purpose: finds area of circle
// Parameters: one circle, c
// Returns: a double of the area
// Pre-conditions: a circle is provided
double area(Circle c);

double pi = atan(1) * 4;

int ccc_win_main() {
	Point p;
	double x;
	double y;
	double radius;
	string per;
	string ar;


	Circle c;

	x = cwin.get_double("enter circle x co: ");
	y = cwin.get_double("enter circle y co: ");
	radius = cwin.get_double("enter circle radius");

	p = Point(x, y);
	c = Circle(p, radius);

	ar = to_string(area(c));
	per = to_string(perimeter(c));

	string text = "The area is: " + ar + " and the perimeter is: " + per;
	Point disp = Point(1, 3);

	cwin << c << Message(disp, text);


	return 0;
}

double perimeter(Circle c) {
	double rad = c.get_radius();
	return  pi * (rad * 2);
}

double area(Circle c) {
	double rad = c.get_radius();
	return (rad * rad) * pi;
}