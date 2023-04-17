/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: April 12, 2023
Last Update: April 17, 2023
Describition: Convert a string into an integer.
*/

#include"Atoi.h"

Atoi::Atoi()
{
	this->beTrans = "";
}
Atoi::Atoi(string s)
{
	this->beTrans = s;
}
void Atoi::SetString(string s)
{
	this->beTrans = s;
}
const string Atoi::GetString()
{
	return this->beTrans;
}
int Atoi::Length()
{
	if (this->beTrans[0] == '-')
		return this->beTrans.length() - 1;
	else
		return this->beTrans.length();
}
bool Atoi::IsDigital()
{
	return this->beTrans.find_first_not_of("-0123456789") == string::npos;
}
int Atoi::StringToInteger()
{
	int sum = 0;
	for (size_t i = this->beTrans[0] == '-' ? 1 : 0; i < this->beTrans.length(); i++)
	{
		sum *= 10;
		sum += beTrans[i] - '0';
	}
	if (this->beTrans[0] == '-')
	{
		sum *= -1;
	}
	return sum;
}