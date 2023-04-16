/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Represent a ratio of two integers.
*/

#include "Fraction.h"

Fraction::Fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

void Fraction::setNumerator(int nu)
{
	this->numerator = nu;
}

void Fraction::setDenominator(int de)
{
	this->denominator = de;
}

void Fraction::getDouble()
{
	double resultD = (double)(numerator) / (double)(denominator);
	if (resultD != (int)resultD)
	{
		std::cout << fixed << setprecision(6);
	}
	else
	{
		std::cout << fixed << setprecision(0);
	}
	std::cout << resultD << std::endl;
}

void Fraction::outputReducedFraction()
{
	int gcdNum = Fraction::gcd(abs(this->numerator), abs(this->denominator));
	int nu = (this->numerator) / gcdNum;
	int de = (this->denominator) / gcdNum;
	if (nu == 0 || de == 0)
	{
		std::cout << 0 << std::endl;
	}
	else if (de == 1)
	{
		std::cout << nu << std::endl;
	}
	else
	{
		std::cout << nu << "/" << de << std::endl;
	}
}

int Fraction::gcd(int a, int b)
{
	if (b == 0)
		return a;
	return Fraction::gcd(b, a % b);
}