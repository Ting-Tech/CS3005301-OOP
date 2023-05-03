/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: Record the number of various body parts of them and generate diary observation logs.
*/

#include "Diary.h"

std::string Diary::Date = "";
std::vector<DayLog> Diary::mainLog;

void Diary::NewDay(std::string Date)
{
	Diary::Date = Date;
	DayLog newDay = { Date };
	mainLog.push_back(newDay);
}

void Diary::NewEvent(std::string name, std::string content)
{
	Event newEvent = { name,content };
	mainLog.back().eventList.push_back({ newEvent });
}