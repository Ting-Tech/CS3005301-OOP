/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: March 20, 2023
Last Update: March 20, 2023
Describition: Count the times of each grade appears.
*/

#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

vector<unsigned int> countQuantity(vector<unsigned int> input);

int main()
{
	ifstream in;
	ofstream out;
	// Open the file
	in.open("grade.txt");
	vector<unsigned int> score;
	vector<unsigned int> result(6);
	// Read the file
	while (!in.eof())
	{
		// Read names & scores into vector 
		unsigned int inputScore;
		in >> inputScore;
		score.push_back(inputScore);
	}
	// Count the time of each grade appears
	result = countQuantity(score);
	// Open the output file
	out.open("grades.Output");
	// Write the reult into the output file
	for (size_t i = 0; i < 6; i++)
	{
		out << result[i] << " grade(s) of " << i << endl;
	}
	// Close the file
	in.close();
	out.close();
	return 0;
}

/*
Intent: Count the time of each grade appears
Pre: Vector of scores
Post: Vector of count results
*/
vector<unsigned int> countQuantity(vector<unsigned int> input)
{
	vector<unsigned int> resultCount = { 0, 0, 0, 0, 0, 0 };
	for (size_t i = 0; i < input.size(); i++)
	{
		switch (input[i])
		{
		case 0:
			resultCount[0]++;
			break;
		case 1:
			resultCount[1]++;
			break;
		case 2:
			resultCount[2]++;
			break;
		case 3:
			resultCount[3]++;
			break;
		case 4:
			resultCount[4]++;
			break;
		case 5:
			resultCount[5]++;
			break;
		}
	}
	return resultCount;
}