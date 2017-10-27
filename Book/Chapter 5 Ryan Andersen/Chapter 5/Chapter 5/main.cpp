// Author: Ryan Andersen
// Assignment: P5.3
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/26/17
// Description: This Program calls the address class

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "mainHeader.h"
#include "Address.h"


int main() {
	Address first(4323, "place street", 1234, "Cool Town", "Utah", 84004);
	Address second(324, "wizard corner", 4321, "Flavor Town", "Boredom", 94321);

	first.printAddress();
	cout << endl;
	second.printAddress();
	cout << endl;

	(first.comes_before(second)) ? cout << "the first adress comes before" : cout << "the second address comes before";
	cout << endl << endl;
	system("pause");
	return 0;
}
