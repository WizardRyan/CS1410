// Author: Ryan Andersen
// Assignment: Chapter 12-A
// Instructor: Blair
// Class: CS 1410
// Date Written: 1/13/18
// Description: a program for practicing Lists


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Header.h"

int main() {

	List fruit;
	fruit.push_back("Orange");
	fruit.push_back("Apple");
	fruit.push_back("Banana");
	fruit.push_back("DragonFruit");

	cout << fruit.get_size() << endl;

	fruit.erase(fruit.begin());

	cout << fruit.get_size();

	cout << endl << endl;
	system("pause");
	return 0;
}