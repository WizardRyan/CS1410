// Author: Ryan Andersen
// Assignment: Chapter 8
// Instructor: Blair
// Class: CS 1410
// Date Written: 2/11/18
// Description: a program for practicing algorithms


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include "Header.h"

//the binary_search function, searches for a value in a vector. 
//If the value isn't found, but is within the range of elements, it sets m to the next largest element.
//Else, m = the size of the vector.
//accepts v, the vector to search, from, where to start the search, to, where to search to, value, the value to be looking for, and m, the param to be set according to the above description
//returns false if value isn't found, true if it is.
bool binary_search(vector<int> v, int from, int to, int value, int& m)
{
	if (from > to) {
		int max = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}

		if (value > max) {
			m = v.size();
		}

		else {
			int mid = (from + to) / 2;
			m = v[mid + 1];
		}

		return false;
	}

	int mid = (from + to) / 2;

	if (v[mid] == value) {
		m = mid;
		return true;
	}

	else if (v[mid] < value)
		return binary_search(v, mid + 1, to, value, m);
	else
		return binary_search(v, from, mid - 1, value, m);
}

int main() {

	vector<int> theNums = { 1, 3, 4, 8, 10 };
	int result = 0;

	// just play with the value (4th param) to test its functionality
	cout << (binary_search(theNums, 0, theNums.size() - 1, 4, result) ? "true" : "false") ;
	cout << endl <<  result;
	
	cout << endl << endl;
	system("pause");
	return 0;
}