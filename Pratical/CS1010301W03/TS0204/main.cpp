/*
Author: ¾G°·§Ê (B11130225@mail.ntust.edu.tw)
Create Date: March 15 2023
Last Edit Date: March 15 2023
Description: Output the input data in the required format
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> getLength(vector<string> input);
int getLongest(vector<int> input);
void outputResult(int largest, int lengh, string input);


int main()
{
	int n = 0, nameLargest = 0, salaryLargest = 0, awardLargest = 0;
	
	while(cin >> n && !cin.eof())
	{
		vector<string> name(n);
		vector<string> salary(n);
		vector<string> award(n);
		vector<int> nameLen(n);
		vector<int> salaryLen(n);
		vector<int> awardLen(n);

		// Cin the data, and sort by name salary award
		for (size_t i = 0; i < n; i++)
		{
			cin >> name[i];
			cin >> salary[i];
			cin >> award[i];
		}

		nameLen = getLength(name);
		salaryLen = getLength(salary);
		awardLen = getLength(award);
		nameLargest = getLongest(nameLen);
		salaryLargest = getLongest(salaryLen);
		awardLargest = getLongest(awardLen);

		// Output the result
		for (size_t i = 0; i < n; i++)
		{
			outputResult(nameLargest, nameLen[i], name[i]);
			cout << "|  ";
			outputResult(salaryLargest, salaryLen[i], salary[i]);
			cout << "|  ";
			outputResult(awardLargest, awardLen[i], award[i]);
			cout << endl;
		}
	}
	return 0;
}

// Intent: Get the longest vector size
// Pre: Vector of category
// Post: Return the longest size in the vector
int getLongest ( vector<int> input )
{
	int largest = 0;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (largest < input[i])
			largest = input[i];
	}
	return largest;
}

// Intent: Get each catogory's length, such as name salary award
// Pre: Vector of string of one catogory
// Post: Return the vector of the catogory's length
vector<int> getLength ( vector<string> input )
{
	vector<int> result(input.size());
	string inputStr;
	for (size_t i = 0; i < input.size(); i++)
	{
		inputStr = input[i];
		result[i] = inputStr.length();
	}
	return result;
}

// Intent: Output the last result according to the longest size
// Pre: Largest size, input string length, string of name salary or award
// Post: Cout the result
void outputResult ( int largest,int lengh , string input )
{
	for (int i = 0; i < largest - lengh; i++)
	{
		cout << " ";
	}
	cout << input;
}