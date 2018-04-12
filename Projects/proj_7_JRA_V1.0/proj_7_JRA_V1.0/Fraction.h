//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class Fraction
{
public:
	Fraction(int numerator, int denominator);
	Fraction(int numerator);
	Fraction();

	~Fraction();

	//the optimize function, calls noNeg and reduce
	//no params
	//no return
	void optimize();

	//this overloads the << operator, to be able to output a fraction
	//accepts out, the stream to use, and frac, the fraction to output
	//returns a stream
	friend ostream& operator<<(ostream& out, const Fraction& frac);

	//each one of these functions overloads the given binary operator, allowing the correct operation to be performed
	//accepts a and b, the fractions to be used
	//returns a fraction or a bool, according to the appropriate operator
	friend Fraction operator*(const Fraction&a, const Fraction& b);
	friend Fraction operator/(const Fraction&a, const Fraction& b);
	friend Fraction operator+(const Fraction& a, const Fraction& b);
	friend Fraction operator-(const Fraction& a, const Fraction& b);
	friend bool operator==(const Fraction&a, const Fraction& b);

	//the equalizeDenominators function, makes demonitors of two fractions the same
	//no accepts a and b, the fractions to be modified
	//no return
	friend void equalizeDenominators(Fraction& a, Fraction& b);


	//these overlaod the post and pre increment operators, each of them add or subract one to the fraction
	//no parameters
	//no returns
	Fraction& operator++();
	Fraction& operator--();

	Fraction operator++(int);
	Fraction operator--(int);



private:

	int numerator = 0;
	int denominator = 1;
	//the reduce function, reduces a fraction to it's lowest terms
	//accepts no params
	//no return
	void reduce();

	//the noNeg function, makes sure the denominator isn't negative, and if it is, flip it
	//no params
	//no return
	void noNeg();



};

