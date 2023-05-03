/*
Author: �G����(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: A number game
*/

#include "NumberGame.h"
NumberGame::NumberGame()
{
	inputNumber = "";
	fileName = "";
}

void NumberGame::SetInput(int input)
{
	std::stringstream ss;
	ss << input;
	inputNumber = ss.str();
}

void NumberGame::ProcessInput()
{
	for (const auto& c : inputNumber)
	{
		int digit = (int)(c - '0');	// change data type
		std::set<int> temp;	// create a temp set
		for (const auto& i : allCombination)
			temp.insert(i * digit);	// multiply current digit with every element in validNumber
		allCombination.insert(digit);	// insert digit
		allCombination.insert(temp.begin(), temp.end());	// insert all combination of current digit
	}
}

void NumberGame::SetFileName(std::string input)
{
	fileName = input;
}

void NumberGame::LoadNumberList()
{
	// open file and read data
	std::ifstream fin(fileName);
	for (int input; fin >> input;)
	{
		if (allCombination.count(input))
			validNumber.push_back(input);
	}
	fin.close();
}

void NumberGame::PrintAllValid()
{
	for (const auto& number : validNumber)
		std::cout << number << '\n';
}

void NumberGame::Reset()
{
	inputNumber = "";
	fileName = "";
	validNumber.clear();
	allCombination.clear();
}