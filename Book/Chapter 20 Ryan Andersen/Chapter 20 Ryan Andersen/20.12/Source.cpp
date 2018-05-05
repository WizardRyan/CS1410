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

#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

// the customCopyIf function, copies values to another container according a predicate
// accepts first and last, the iterators representing the range of a container. 
// accepts toCopy: the container to copy to. 
// accepts pred: the predicate function that requires a dereferenced iterator of any data type to be passed to it 
// no return
template<class IterRead, class IterCopy, class Pred>
void customCopyIf( IterRead first, IterRead last, IterCopy toCopy, Pred pred) {
	while (first != last) {
		if (pred(*first)) {
			*toCopy = *first;
			toCopy++;
		}
		first++;
	}
}

// also, there totally already was a copy_if since C++11 http://www.cplusplus.com/reference/algorithm/copy_if/

// the print function (almost didn't write this so I wouldn't have to write this heckn header haha) prints the values in a container while ommitting zeros
// accepts cont, the container to print
// no return
template<class T>
void print(T cont) {
	for (auto item : cont) {
		cout << ( item == 0 ? "" : to_string(item)) << " ";
	}
}

int main() {
	list<int> ages{ 4, 14, 65, 23, 22, 80 };
	list<int> eighteenPlus(ages.size());

	vector<int> nums{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int> evensOnly(nums.size());
	
	customCopyIf(ages.begin(), ages.end(), eighteenPlus.begin(), [](int age) { return age >= 18; });
	customCopyIf(nums.begin(), nums.end(), evensOnly.begin(), [](int num) {return num % 2 == 0; });

	print(eighteenPlus);
	cout << endl;
	print(evensOnly);

	cout << endl << endl;
	system("pause");
	return 0;
}