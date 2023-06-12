/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#pragma once
#include "Book.h"
#include "SortByAuthor.h"
#include "SortByTitle.h"

#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using Editions = set<int>;

class LibraryDatabase
{
public:
	void insert(string title, string author, int edition);
	void deleteBook(string title, string author);
	void deleteEdition(string title, string author, int edition);
	void findAuthor(string author);
	void findBook(string title, string author);
	void sortByTitle();
	void sortByAuthor();

private:
	map<Book, Editions, SortByTitle> database;

	void printEdition(Book book);
};