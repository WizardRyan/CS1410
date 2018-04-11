#include "Fraction.h"



Fraction::Fraction()
{
}


Fraction::Fraction(int numerator, int denominator) : numerator{ numerator }
{
	denominator == 0 ? throw runtime_error("Cannot initialize denomiator as zero!") : this->denominator = denominator;
}

Fraction::~Fraction()
{
}

Fraction Fraction::reduce(Fraction frac)
{

	return Fraction();
}
