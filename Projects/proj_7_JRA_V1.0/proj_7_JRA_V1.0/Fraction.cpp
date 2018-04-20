//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Fraction.h"

int getGcf(int n1, int n2) {
	// derived from Euclid's algorithm https://en.wikipedia.org/wiki/Euclidean_algorithm
	int tmp;
	n1 = abs(n1);
	n2 = abs(n2);
	while (n1 > 0) {
		tmp = n1;
		n1 = n2 % n1;
		n2 = tmp;
	}
	return n2;
}

int getLcm(int a, int b) {
	return (a * b) / getGcf(a, b);
}

void equalizeDenominators(Fraction& a, Fraction& b) {
	if (a.denominator != b.denominator) {
		int aTemp = a.denominator;
		a.denominator *= b.denominator;
		a.numerator *= b.denominator;
		b.denominator *= aTemp;
		b.numerator *= aTemp;
	}
}

Fraction::Fraction()
{
}

Fraction::Fraction(int numerator, int denominator) : numerator{ numerator }
{
	denominator == 0 ? throw runtime_error("Cannot initialize denominator as zero!") : this->denominator = denominator;
	this->optimize();
}

Fraction::Fraction(int numerator): numerator{numerator}
{
	this->optimize();
}

Fraction::~Fraction()
{
	this->optimize();
}

void Fraction::reduce()
{
	int gcf = getGcf(this->numerator, this->denominator);
	this->numerator /= gcf;
	this->denominator /= gcf;
}

void Fraction::noNeg()
{
	if (this->denominator != abs(this->denominator)) {
		this->denominator *= -1;
		this->numerator *= -1;
	}
}

void Fraction::optimize()
{
	this->reduce();
	this->noNeg();
}

Fraction & Fraction::operator++()
{
	this->numerator += this->denominator;
	return *this;
}

Fraction & Fraction::operator--()
{
	this->numerator -= this->denominator;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	++(*this);
	return temp;
}

Fraction Fraction::operator--(int)
{
	Fraction temp = *this;
	--(*this);
	return temp;
}

ostream& operator<<(ostream& out, const Fraction& frac) {

	return out << frac.numerator << (frac.denominator == 1 ? "" : " / " + to_string(frac.denominator));
}

Fraction operator*(const Fraction&a, const Fraction& b) {
	Fraction c(a.numerator * b.numerator, a.denominator * b.denominator);
	c.optimize();
	return c;
}

Fraction operator/(const Fraction&a, const Fraction& b) {
	Fraction c(a.numerator * b.denominator, a.denominator * b.numerator);
	c.optimize();
	return c;
}

Fraction operator+(const Fraction& a,  const Fraction& b) {
	Fraction aa = a;
	Fraction bb = b;

	equalizeDenominators(aa, bb);
	Fraction c(aa.numerator + bb.numerator, aa.denominator);
	c.optimize();
	return c;
}

Fraction operator-(const Fraction& a, const Fraction& b) {
	Fraction aa = a;
	Fraction bb = b;

	equalizeDenominators(aa, bb);
	Fraction c(aa.numerator - bb.numerator, aa.denominator);
	c.optimize();
	return c;
}

bool operator==(const Fraction&a, const Fraction& b) {
	Fraction aa = a;
	Fraction bb = b;

	equalizeDenominators(aa, bb);
	return aa.numerator == bb.numerator;
}
