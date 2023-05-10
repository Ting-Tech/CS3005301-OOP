/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 1, 2023
Last Update: May 10, 2023
Describition: Finds the longest word that reverses to a different word.
*/

#include<iostream>
#include<unordered_set>
#include<string>
#include<vector>

using namespace std;

string reverseWord(string word);
string toLowerWord(string word);

int main()
{
	string maxWord;
	string inputWord;
	size_t maxLen = 0;
	vector<string> book;
	unordered_set<string> findWord;
	while ((cin >> inputWord) && !cin.eof())
	{
		book.push_back(toLowerWord(inputWord));
	}
	for (size_t i = 0; i < book.size(); i++)
	{
		for (size_t j = 0; j < book.size(); j++)
		{
			if (i != j && reverseWord(book[i]) == book[j])
			{
				if (book[i].length() > maxLen)
				{
					maxLen = book[i].length();
					maxWord = book[i];
				}
			}
		}
	}
	cout << maxWord << endl;
}

string toLowerWord(string word)
{
	string result;
	for (size_t i = 0; i < word.length(); i++)
	{
		result.push_back(towlower(word[i]));
	}
	return result;
}

string reverseWord(string word)
{
	reverse(word.begin(), word.end());
	return word;
}