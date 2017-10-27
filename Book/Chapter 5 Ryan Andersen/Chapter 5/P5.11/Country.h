//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <string>

using namespace std;

class Country {
private:
	string name;
	double area;
	int population;
	double density;

public:

	Country(string nameP, double areaP, int populationP);

	//don't even need em
	//double getArea() const;
	//
	//int getPopulation() const;

	//double getDensity() const;

	string getName() const;

	//pass in a string that then determines what gets returned.
	//this lets the user pass what needs to be returned as a parameter to another function
	double getCustom(string s);
};