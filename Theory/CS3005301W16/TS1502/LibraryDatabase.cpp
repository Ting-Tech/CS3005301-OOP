/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#include "LibraryDatabase.h"

void LibraryDatabase::insert(string title, string author, int edition)
{
	Book book = Book(title, author);
	Editions& editions = database[book];
	if (editions.count(edition)) throw "Datum already exist.";

	editions.insert(edition);

	cout << "Insert " << author << "'s " << title << ", ";
	cout << "Edition: " << edition << ".\n";
}

void LibraryDatabase::deleteBook(string title, string author)
{
	Book book = Book(title, author);
	Editions& editions = database[book];
	if (editions.empty()) throw "Book doesn't exist.";

	editions.clear();

	cout << "Delete " << author << "'s " << title << ".\n";
}

void LibraryDatabase::deleteEdition(string title, string author, int edition)
{
	Book book = Book(title, author);
	Editions& editions = database[book];
	if (!editions.count(edition)) throw "Datum doesn't exist.";

	editions.erase(edition);

	cout << "Delete " << author << "'s " << title << ", ";
	cout << "Edition: " << edition << ".\n";
}

void LibraryDatabase::findAuthor(string author)
{
	vector<string> titles;

	for (const pair<Book, Editions>& pair : database) {
		if (pair.first.author == author) titles.emplace_back(pair.first.title);
	}

	if (titles.empty()) throw "No book found.";

	cout << author << "'s Books: ";

	for (const string& title : titles) {
		cout << title;
		if (title != titles.back()) cout << ", ";
	}

	cout << '\n';
}

void LibraryDatabase::findBook(string title, string author)
{
	Book book = Book(title, author);
	Editions& editions = database[book];
	if (editions.empty()) throw "Book doesn't exist.";

	cout << "Title: " << title << '\t';
	cout << "Author: " << author << '\t';
	printEdition(book);
}

void LibraryDatabase::sortByTitle()
{
	for (const pair<Book, Editions>& pair : database) {
		if (pair.second.empty()) continue;

		cout << "Title: " << pair.first.title << '\t';
		cout << "Author: " << pair.first.author << '\t';
		printEdition(pair.first);
	}
}

void LibraryDatabase::sortByAuthor()
{
	map<Book, Editions, SortByAuthor> copyDataBase;

	copy(begin(database), end(database), inserter(copyDataBase, begin(copyDataBase)));

	for (const pair<Book, Editions>& pair : copyDataBase) {
		if (pair.second.empty()) continue;

		cout << "Title: " << pair.first.title << '\t';
		cout << "Author: " << pair.first.author << '\t';
		printEdition(pair.first);
	}
}

void LibraryDatabase::printEdition(Book book)
{
	Editions& editions = database[book];

	cout << "Edition: ";

	for (const int& edition : editions) {
		cout << edition;
		if (editions.find(edition) != prev(end(editions))) cout << ", ";
	}

	cout << '\n';
}