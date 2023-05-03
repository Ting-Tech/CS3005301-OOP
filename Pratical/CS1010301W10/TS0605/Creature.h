/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: Record the number of various body parts of them and generate diary observation logs.
*/

#pragma once
#include <string>
#include <map>
#include <iostream>
#include <sstream>

#include "Diary.h"

class Creature
{
private:
	std::string name;
	std::map<std::string, int> bodyPart;
	std::string partIndex;
	int birthdayIndex;

	std::string generateMessage(int, int);
public:
	Creature(std::string);
	Creature(std::string, Creature);

	void PrintStatus() const;
	void PrintLog() const;

	Creature& operator[](std::string);
	void operator=(int);
	void operator+=(int);
	void operator-=(int);
};