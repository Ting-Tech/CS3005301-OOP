/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: March 13, 2023
Last Update: March 13, 2023
Describition: This program is to  write a function that computes the average and standard deviation of input scores.
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

double standardDeviation(vector < double >, double avg );
double average(vector<double>);

int main()
{
	int n = 0;
	while((cin >> n) && !cin.eof())
	{
		// Read the input number into vector
		vector<double> inputNum;
		for(int i = 0;i < n; i++)
		{
			double x = 0;
			cin >> x;
			inputNum.push_back(x);
		}
		double avg = average(inputNum);
		 cout << "Average:" << avg << "\tStandard deviation:" << standardDeviation(inputNum, avg) << endl;
	}
	return 0;
}

// Intent: Calculate the average of the vector
// Pre: Vector of the input numbers
// Post:Return the average
double average(vector < double > inputNum)
{
	double sum = 0;
	for (int i = 0; i < inputNum.size(); i++)
	{
		sum = inputNum[i] + sum;
	}
	sum /= inputNum.size();
	return sum;
}

// Intent: Calculate standard deviation
// Pre: Vector of the input numbers & average of the input numbers
// Post:Return the standard deviation
double standardDeviation(vector<double> inputNum, double avg)
{
	double sum = 0;
	for (int i = 0; i < inputNum.size(); i++)
	{
		sum = pow(inputNum[i] - avg, 2) + sum;
	}
	sum /= inputNum.size();
	return sqrt(sum);
}