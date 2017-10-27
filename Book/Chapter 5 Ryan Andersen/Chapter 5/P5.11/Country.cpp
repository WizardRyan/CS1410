//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Country.h"

Country::Country(string nameP, double areaP, int populationP) {
	name = nameP;
	area = areaP;
	population = populationP;
	density = population / area;
}



//double Country::getArea() const {
//	return area;
//}
//
//int Country::getPopulation() const {
//	return population;
//}
//double Country::getDensity() const {
//	return density;
//}


string Country::getName() const {
	return name;
}

double Country::getCustom(string s) {

	if (s == "area") {
		return area;
	}

	if (s == "density") {
		return density;
	}

	if (s == "population") {
		return population;
	}

	else {
		return -1;
	}
}
