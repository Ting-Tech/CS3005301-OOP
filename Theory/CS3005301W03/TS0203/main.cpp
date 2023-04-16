/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: March 13, 2023
Last Update: March 13, 2023
Describition: This program is to try to put the characters into a n*n square.
*/

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
	string inputStr;
	while(cin >> inputStr && !cin.eof())
	{
		size_t size = 0;
		// Calculate square size
		size = ceil(sqrt(inputStr.size()));
		vector<string> outputStr(size);
		// Transform string to square
		for (size_t i = 0; i < inputStr.length(); i++)
		{
			outputStr[i % size].push_back(inputStr[i]);
		}
		// Output the result
		for (size_t i = 0; i < outputStr.size(); i++)
		{
			cout << outputStr[i] << endl;
		}
	}
	return 0;
}