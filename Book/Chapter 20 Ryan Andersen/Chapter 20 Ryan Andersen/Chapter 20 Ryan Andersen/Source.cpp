// Author: Ryan Andersen
// Assignment: Chapter 20
// Instructor: Blair
// Class: CS 1410
// Date Written: 5/5/18
// Description: a program for demonstrating use of the stl

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// the customFind function, finds a value in a containera nd returns an iterator pointing to it
// accepts iter1 and iter2, representing the range of a container
// accepts num, the number to find
// returns an iterator pointing to the first found value, or if not found, an iterator pointing past the end of the container.
template <class T, class N>
T customFind(T iter1, T iter2, N num) {
	// lambdas baby!
	return find_if(iter1, iter2, [&num](N inputNum) { return inputNum == num; });
}


int main() {
	vector<int>nums{ 1, 2, 3, 4, 5, 6, 7 };

	// mess with this to test
	const int NUM_TO_FIND = 2;

	vector<int>::iterator it = customFind(nums.begin(), nums.end(), NUM_TO_FIND);

	cout << (it != nums.end() ? "Num found: " + to_string(*it) : "Num not found");

	cout << endl << endl;
	system("pause");
	return 0;
}