// Author: Ryan Andersen
// Assignment: P5.11
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/26/17
// Description: Implementation of a country class

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "mainHeader.h"
#include "Country.h"

//bubble sort like a noob
void bSort(vector<Country>& vec, string get);


int main() {
	vector<Country> countries;
	Country first("Bigland", 9999999, 500);
	Country second("Denseland", 20, 500);
	Country third("Popularland", 500, 1000);
	countries.push_back(first);
	countries.push_back(second);
	countries.push_back(third);


	bSort(countries, "area");
	cout << "The country with the largest area is: " << countries[0].getName() << endl;
	
	bSort(countries, "population");
	cout << "The country with the most people is: " << countries[0].getName() << endl;

	bSort(countries, "density");
	cout << "The country with the largest population density is: " << countries[0].getName();

	cout << endl << endl;
	system("pause");
	return 0;
}

void bSort(vector<Country>& vec, string get) {

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec.size() - 1; j++) {
			if (vec[j].getCustom(get) < vec[j + 1].getCustom(get)) {
				Country temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
}