/**
 * @ Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Create Time: 2023-03-01
 * @ Modified by: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Modified time: 2023-03-01
 * @ Description: This C++ program is to output the "Hello World" according to the input quantity.
 */

#include<iostream>

using namespace std;

int main()
{
	int quantity = 0;
	while (cin >> quantity)
	{
		//according to the input quantity cout "Hello World" 
		for (int i = 0; i < quantity; i++)
		{
			cout << "Hello World!\n";
		}
	}
	return 0;
}