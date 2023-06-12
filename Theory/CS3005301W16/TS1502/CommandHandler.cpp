/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#include "CommandHandler.h"

LibraryDatabase CommandHandler::libraryDatabase;

void CommandHandler::run()
{
	vector<string> args;

	while (CommandHandler::getline(args)) {
		try {
			if (args[0] == "") continue;
			if (args[0] == "Insert") insertCommand(args);
			else if (args[0] == "Delete") deleteCommand(args);
			else if (args[0] == "Find") findCommand(args);
			else if (args[0] == "Sort") sortCommand(args);
			else throw "Unknown Command.";
		}
		catch (const char* ERROR) {
			cout << ERROR << '\n';
		}
	}
}

istream& CommandHandler::getline(vector<string>& args)
{
	string commandLine;
	std::getline(cin, commandLine);

	regex regex("\\s+(?=(?:[^\"]*\"[^\"]*\")*[^\"]*$)");

	args = {
		sregex_token_iterator(begin(commandLine), end(commandLine), regex, -1),
		sregex_token_iterator(),
	};

	return cin;
}

string CommandHandler::erase(string argument, char character)
{
	argument.erase(remove(begin(argument), end(argument), character), end(argument));

	return argument;
}

void CommandHandler::insertCommand(vector<string>& args)
{
	if (args.size() == 4) return libraryDatabase.insert(erase(args[1], '"'), erase(args[2], '"'), stoi(args[3]));

	throw "Incomplete Command.";
}

void CommandHandler::deleteCommand(vector<string>& args)
{
	if (args.size() == 4 && args[1] == "Book") return libraryDatabase.deleteBook(erase(args[2], '"'), erase(args[3], '"'));
	if (args.size() == 5 && args[1] == "Edition") return libraryDatabase.deleteEdition(erase(args[2], '"'), erase(args[3], '"'), stoi(args[4]));

	throw "Incomplete Command.";
}

void CommandHandler::findCommand(vector<string>& args)
{
	if (args.size() == 3 && args[1] == "Author") return libraryDatabase.findAuthor(erase(args[2], '"'));
	if (args.size() == 4 && args[1] == "Book") return libraryDatabase.findBook(erase(args[2], '"'), erase(args[3], '"'));

	throw "Incomplete Command.";
}

void CommandHandler::sortCommand(vector<string>& args)
{
	if (args.size() == 3) {
		if (args[1] + ' ' + args[2] == "by Title") return libraryDatabase.sortByTitle();
		if (args[1] + ' ' + args[2] == "by Author") return libraryDatabase.sortByAuthor();
	}

	throw "Incomplete Command.";
}