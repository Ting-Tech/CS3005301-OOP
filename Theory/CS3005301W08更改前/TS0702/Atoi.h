/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: April 12, 2023
Last Update: April 17, 2023
Describition: Convert a string into an integer
*/

#pragma once

#include<iostream>
#include <string>
using namespace std;

class Atoi {

private:
	string beTrans;
public:
	Atoi();
	Atoi(string s);
	void SetString(string s);
	const string GetString();
	int Length();
	bool IsDigital();
	int StringToInteger();
};