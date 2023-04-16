// Author: ¾G°·§Ê (B11130225@mail.ntust.edu.tw)
// Create Date: March 22, 2023
// Last Update: March 22, 2023
// Description: Change the entered number according to the required format.

#include<iostream>
#include<string>

using namespace std;

string formatNumber(string x, int m, int n, char c);

int main()
{
	string x, result;
	int  m = 0, n = 0;
	char c;
	while ((cin >> x >> m >> n >> c) && !cin.eof())
	{
		result = formatNumber(x, m, n, c);
		cout << result << endl;
	}
	return 0;
}

/*
Intent: Change the input number to the requiresd format
Pre: number of string, total result length, decimal places, word filled
Post:Final result number of requiresd format
*/
string formatNumber(string x, int m, int n, char c)
{
	int dotPosition = 0, decimalPlaces = 0, lastDecimalIndex = 0, missingChr;
	dotPosition = x.find(".");
	// Determine whether there is a decimal point and decimal places are required
	if (dotPosition == -1 && n > 0)
	{
		x = x + ".";
	}
	// Change the number of decimal places according to your needs.
	// If you don¡¦t need a decimal place, delete it together with the decimal point
	dotPosition = x.find(".");
	if (dotPosition >= 0)
	{
		if (n == 0)
		{
			lastDecimalIndex = dotPosition;
		}
		else
		{
			lastDecimalIndex = dotPosition + n + 1;
		}
		decimalPlaces = x.length() - dotPosition - 1;
		if ( decimalPlaces >= n)
		{
			x.erase(lastDecimalIndex);
		}
		else
		{
			for ( int i = 0; i < n - decimalPlaces; i++)
			{
				x = x + '0';
			}
		}
	}
	// Add words to the required number of digits
	missingChr = m - x.length();
	for (int i = 0; i < missingChr; i++)
	{
		x.insert(x.begin(), c);
	}
	return x;
}