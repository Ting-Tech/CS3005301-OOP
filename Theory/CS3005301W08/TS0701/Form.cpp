#include"Form.h"

Form::Form()
{
	string word = "";
	string fileWordName = "";
	//vector<string> validWords = "";
}

void Form::SetInputWord(string inputWord)
{
	this->word = inputWord;
}

void Form::ProcessInputWord()
{
	this->wordMap.clear();
	for (size_t i = 0; i < this->word.length(); i++)
	{
		this->word[i] = tolower(this->word[i]);
		this->wordMap[this->word[i]] += 1;
	}
}

void Form::SetFileName(string fileName)
{
	this->fileWordName = fileName;
}

void Form::Load_CompareWord()
{
	this->validWords.clear();
	this->in.open(this->fileWordName);
	while(!this->in.eof())
	{
		string fileWord;
		map<char, int> inputWordMap;
		this->in >> fileWord;
		for (size_t i = 0; i < fileWord.length(); i++)
		{
			inputWordMap[fileWord[i]] += 1;
		}
		bool conti = false;
		for (const auto& it : inputWordMap) {
			if (it.second > this->wordMap[it.first]) {
				conti = true;
				break;
			}
		}

		if (conti)
			continue;

		this->validWords.push_back(fileWord);
	}
}

void Form::PrintFoundWords()
{
	for (size_t i = 0; i < this->validWords.size(); i++)
	{
		cout << this->validWords[i] << endl;
	}
}