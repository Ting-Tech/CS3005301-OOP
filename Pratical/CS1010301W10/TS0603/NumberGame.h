/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: A number game
*/

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
class NumberGame
{
private:
	std::string inputNumber;
	std::string fileName;
	std::set<int> allCombination;
	std::vector<int> validNumber;
public:
	NumberGame();
	void SetInput(int);
	void ProcessInput();
	void SetFileName(std::string);
	void LoadNumberList();
	void PrintAllValid();
	void Reset();
};