#pragma once

#include<iostream>
#include<string>
#include <cctype>
#include<fstream>
#include<vector>
#include<map>

using namespace std;

class Form
{
private:
	string word;
	string fileWordName;
	vector<string> validWords;
	ifstream in;
	map<char, int> wordMap;

public:
	Form();
	void SetInputWord(string inputWord); // set input
	void ProcessInputWord(); // process input
	void SetFileName(string fileName); // set file name
	void Load_CompareWord(); // read-in data and compare
	void PrintFoundWords(); // print answers
};
