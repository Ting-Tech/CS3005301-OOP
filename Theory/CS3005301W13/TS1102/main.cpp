/*
Author: 鄭健廷(B11130225@mail.ntust.edu.tw)
Date: May 22, 2023
Last Update: May 22, 2023
Describition: Calculate matrix multiplication.
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	size_t rowA, colA, rowB, colB;
	cin >> rowA >> colA >> rowB >> colB;
	vector<vector<int>> matrixA(rowA, vector<int>(colA, 0));
	vector<vector<int>> matrixB(rowB, vector<int>(colB, 0));
	vector<vector<int>> result(rowA, vector<int>(colB, 0));

	for (size_t i = 0; i < rowA; i++)
	{
		for (size_t j = 0; j < colA; j++)
		{
			int inputNum = 0;
			cin >> inputNum;
			matrixA[i][j] = inputNum;
		}
	}
	for (size_t i = 0; i < rowB; i++)
	{
		for (size_t j = 0; j < colB; j++)
		{
			int inputNum = 0;
			cin >> inputNum;
			matrixB[i][j] = inputNum;
		}
	}

	if (colA != rowB)
	{
		cout << "Matrix multiplication failed.";
	}
	else
	{
		for (size_t i = 0; i < rowA; i++)
		{
			for (size_t j = 0; j < colB; j++)
			{
				int sum = 0;
				for (size_t k = 0; k < colA; k++)
				{
					sum += matrixA[i][k] * matrixB[k][j];
				}
				result[i][j] = sum;
			}
		}
		for (size_t i = 0; i < rowA; i++)
		{
			for (size_t j = 0; j < colB; j++)
			{
				cout << result[i][j];
				if (j < colB - 1)
					cout << ' ';
			}
			cout << endl;
		}
	}
}