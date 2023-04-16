// Author: 鄭健廷 (B11130225@mail.ntust.edu.tw)
// Create Date: March 22, 2023
// Last Update: March 22, 2023
// Description: Find the maximum positive integer N where N! is within the CPU calculation range of the current year.

#include <iostream>
#include <cmath>

using namespace std;

const unsigned int START_YR = 1900;

int main()
{
	unsigned int year = 0;

	while (cin >> year && !cin.eof())
	{
		// Calculate the bit value in the nth year and take the log
		unsigned int bits = pow(2, ((year - START_YR) / 10) + 2);
		double maxLog = log10(2) * bits;

		// Calculate n! log number
		double countLog = 0;
		unsigned int result = 0;
		while (countLog < maxLog)
		{
			result++;
			countLog = countLog + log10(result);
		}
		// Subtract one digit from the result (because it starts from 0)
		result = result -1;
		// Output the result
		cout << result << endl;
	}
}