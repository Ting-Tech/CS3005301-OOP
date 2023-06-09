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