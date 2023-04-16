/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Represent a ratio of two integers.
*/

#ifndef Fraction_H
#define Fraction_H
#include <iostream>
#include <iomanip>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

	int gcd(int a, int b);
public:
	Fraction();

	// Intent: Set fraction numerator
	// Pre: Variable nu is numerator
	void setNumerator(int nu);

	// Intent: Set fraction denominator
	// Pre: Vsariable nu is denominator
	void setDenominator(int de);

	// Intent: Print fraction number
	void getDouble();

	// Intent: Print reduced fraction
	void outputReducedFraction();
};

#endif //Fraction_H