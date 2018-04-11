#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class Fraction
{
public:
	Fraction(int numerator, int denominator);
	Fraction();

	~Fraction();
	
	static Fraction reduce(Fraction frac);

private:
	int numerator = 0;
	int denominator = 1;
};

