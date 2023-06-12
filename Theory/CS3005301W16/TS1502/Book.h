/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#pragma once
#include<string>

using namespace std;

struct Book
{
	string title, author;

	Book(string title, string author) : title(title), author(author) {}
};