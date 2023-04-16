/**
 * @ Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Create Time: 2023-03-01
 * @ Modified by: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Modified time: 2023-03-06
 * @ Description: This C++ program is to use Babylonian algorithm to compute the square root of a positive number.
 */

#include<iostream>
#include<iomanip>

using namespace std;

double squareRoot(double);

int main()
{
	double number = 0;
	while (true)
	{
		//input number
		cin >> number;
		//identify wheather is eof
		if (!cin.eof())
		{
			//output result
			cout << fixed << setprecision(2) << squareRoot(number) << endl;
		}
		else
		{
			//if eof skip this round
			break;
		}
	}
	return 0;
}

//function of square root
double squareRoot(double number)
{
	double guess = 0, gap = 1, lastResult = 0, result = 0;
	//first time calculation of Babylonian algorithm
	guess = number / 2;
	result = number / guess;
	guess = (guess + result) / 2;
	while (gap > 0.01)
	{
		//repeat the calculation of Babylonian algorithm's second and third steps until the guess subtract the previous guess smaller than 0.01
		lastResult = result;
		result = number / guess;
		guess = (guess + result) / 2;
		gap = result - lastResult;
	}
	return result;
}