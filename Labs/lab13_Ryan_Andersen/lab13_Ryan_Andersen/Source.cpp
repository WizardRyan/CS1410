// Author: Ryan Andersen
// Assignment: lab 13
// Instructor: Blair
// Class: CS 1410
// Date Written: 4/23/18
// Description: a program for trying out templates
#include <iostream>
#include "Pair.h"
using namespace std;


int main()
{
	Pair<char> letters('a', 'd');
	cout << "\nThe first letter is: " << letters.getFirst();
	cout << "\nThe second letter is: " << letters.getSecond();

	cout << endl;
	cin.get();
}