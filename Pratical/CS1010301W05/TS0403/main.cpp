/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 28 2023
Description: Find Greatest Common Divisor
*/

#include<iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
	int numA = 0, numB = 0;
	while (cin >> numA >> numB && !cin.eof())
	{
		cout << gcd(numA, numB) << endl;
	}
}

// Intent: Find Greatest Common Divisor
 // Pre: Two number input for finding GCD
 // Post: The GCD of the two number
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}