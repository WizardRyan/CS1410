#include "ccc_win.h"
// Author: Ryan Andersen
// Assignment: chapter 4
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/1/17
// Description: This finds the distance between two user selected points

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


// Purpose: find distance between two points
// Parameters: two points, p and q
// Returns: a double that stores the distance between two points
// Pre-conditions: two points are provided
double distance(Point p, Point q);

int ccc_win_main() {
	Point first = cwin.get_mouse("This is your first point");
	Point second = cwin.get_mouse("This is your second point");

	double dist = distance(first, second);
	Line l(first, second);

	string messg = "The distance is " + to_string(dist);

	cwin << l << Message(second, messg);

	return 0;
}

double distance(Point p, Point q) {
	double x = p.get_x();
	double y = p.get_y();

	double x2 = q.get_x();
	double y2 = q.get_y();

	return sqrt((pow((x - x2), 2) + pow((y - y2), 2)));
}
