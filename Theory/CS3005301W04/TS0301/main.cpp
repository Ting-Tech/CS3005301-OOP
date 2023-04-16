/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: March 20, 2023
Last Update: March 20, 2023
Describition: Reads a list of numbers with an integer type and counts how many times each number appears.
*/

#include<iostream>
#include<vector>
#include <algorithm>
#include<map>

using namespace std;

int main()
{
	int input = 0, size = 0;
	// Read list of numbers
	vector<int> number;
	do
	{
		cin >> input;
		number.push_back(input);
	} while (cin.get() != '\n');
	// Map the number and count the appears times
	map<int, int> mapNum;
	for (size_t i = 0; i < number.size(); i++)
	{
		mapNum[number[i]] = mapNum[number[i]] + 1;
	}
	vector<pair<int, int>> vectorList;
	// Change map result into pair
	for (auto& it : mapNum)
	{
		vectorList.push_back(pair<int, int>(it.first, it.second));
	}
	// Sort the list of the number with appears times
	sort(
		vectorList.begin(),
		vectorList.end(),
		[](pair<int, int> a, pair<int, int> b)
		{
			return a.first > b.first;
		}
	);
	// Output the result
	cout << "N\tcount" << endl;
	for (auto& it : vectorList)
		cout << it.first << "\t" << it.second << endl;
	return 0;
}