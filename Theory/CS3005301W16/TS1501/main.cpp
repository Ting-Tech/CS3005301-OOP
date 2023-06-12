/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Remove duplicates
*/

#include<iostream>
#include<set>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	set<string> nameSet;
	ifstream inFile;

	inFile.open("name.txt");

	string name;
	while (getline(inFile, name))
	{
		nameSet.insert(name);
	}

	for (const auto& out : nameSet)
	{
		cout << out << endl;
	}

	return 0;
}