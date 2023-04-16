/*
Author: ¾G°·§Ê (B11130225@mail.ntust.edu.tw)
Create Date: March 15 2023
Last Edit Date: March 15 2023
Description: Calculate the tax payable according to different rate of citizens.
*/

#include<iostream>

using namespace std;

double taxCalculate(double income);

int main()
{
	while (!cin.eof())
	{
		double income = 0;
		cin >> income;
		if (!cin.eof())
		{
			cout.precision(2);
			cout << fixed << taxCalculate(income) << endl;
		}
	}
	return 0;
}


// Intent: Calculate the tax according to different rate
// Pre: The double number of the income
// Post: Return the taxes payableof each citizen
double taxCalculate(double income)
{
	double rate = 0.0, start = 0.0, over = 0.0, result = 0.0;

	if (income < 750)
		rate = 0.01,
		over = income,
		start = 0.0;

	if (income >= 750 && income < 2250)
		rate = 0.02,
		start = 7.5,
		over = income - 750.0;

	if (income >= 2250 && income < 3750)
		rate = 0.03,
		start = 37.5,
		over = income - 2250.0;

	if (income >= 3750 && income < 5250)
		rate = 0.04,
		start = 82.5,
		over = income - 3750.0;

	if (income >= 5250 && income < 7000)
		rate = 0.05,
		start = 142.5,
		over = income - 5250.0;

	if (income >= 7000)
		rate = 0.06,
		start = 230,
		over = income - 7000.0;

	result = ((over * rate) + start);
	
	return result;
}