/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Represent a ratio of two integers.
*/

#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction f1, f2;
	f1.setNumerator(4);
	f1.setDenominator(2);
	f1.getDouble();
	f1.outputReducedFraction();

	f2.setNumerator(20);
	f2.setDenominator(60);
	f2.getDouble();
	f2.outputReducedFraction();
	return 0;
}