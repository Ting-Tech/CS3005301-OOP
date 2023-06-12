/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#pragma once

#include "LibraryDatabase.h"

#include <regex>
#include <sstream>

class CommandHandler
{
public:
	static void run();

private:
	static LibraryDatabase libraryDatabase;
	static istream& getline(vector<string>& args);
	static string erase(string argument, char character);
	static void insertCommand(vector<string>& args);
	static void deleteCommand(vector<string>& args);
	static void findCommand(vector<string>& args);
	static void sortCommand(vector<string>& args);
};