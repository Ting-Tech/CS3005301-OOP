/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: March 13, 2023
Last Update: March 13, 2023
Describition: This program is to output the names and scores of top three players.
*/

#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

bool getHigherScore(pair<string, unsigned int> a, pair<string, unsigned int> b);
vector<pair<string, unsigned int>>
getHighScores(vector<string> name, vector<unsigned int> score);

int main()
{
	ifstream in;
	// Open file "scores.txt"
	in.open("scores.txt");
	vector<string> name;
	vector<unsigned int> score;
	while (!in.eof())
	{
		// Read names & scores into vector 
		string inputName;
		unsigned int inputScore;
		in >> inputName;
		in >> inputScore;
		name.push_back(inputName);
		score.push_back(inputScore);
	}

	// Output result
	vector<pair<string, unsigned int>> list;
	list = getHighScores(name, score);
	for (size_t i = 0; i < 3; i++)
	{
		cout << list[i].first << endl << list[i].second << endl;
	}
	return 0;
}

// Intent: Get the higher score pair
// Pre: Two pair, one is the first pai the other is last pair
// Post: Return whether first pair's score is larger than the last one
bool getHigherScore(pair<string, unsigned int> a, pair<string, unsigned int> b)
{
	return a.second > b.second;
}

// Intent: Get the top three pair
// Pre: Two vector one is name the other is score
// Post:Return the top three pair
vector<pair<string, unsigned int>>
getHighScores(vector<string> name, vector<unsigned int> score)
{
	vector<pair<string, unsigned int>> list;
	for (size_t i = 0; i < name.size(); i++)
	{
		list.push_back( pair<string, unsigned int>(name[i], score[i]) );
	}

	sort(list.begin(), list.end(), getHigherScore);

	list.resize(3);

	return list;
}