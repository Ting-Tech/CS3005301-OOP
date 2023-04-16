/*
Author: ¾G°·§Ê B11130225 (B11130225@mail.ntust.edu.tw)
Create: time 2023/3/6
Editor: ¾G°·§Ê B11130225 (B11130225@mail.ntust.edu.tw)
Last edit time: 2023/3/7
Discription: This program is to fill in the space at the beginning, so that the number of spaces plus the number of characters in INPUT just meets 10 digits.
*/

#include<iostream>
//Use "string" library
#include <string>

using namespace std;

int main()
{
	string  str;
	int strLength = 0;
	while (true)
	{
		//input string
		cin >> str;
		//Identify wheather the input is EOF
		if (cin.eof())
		{
			break;
		}
		else
		{
			//Get the Length of the string
			strLength = str.size();
			//Fill in the number of missing space
			for(int i = 0; i < 10 - strLength; i++)
			{
				cout << " ";
			}
			//Output the original input
			cout << str << endl;
		}
			
	}
}