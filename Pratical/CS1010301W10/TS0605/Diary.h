/*
Author: �G����(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: Record the number of various body parts of them and generate diary observation logs.
*/

#pragma once
#include <string>
#include <vector>

typedef struct
{
	std::string name;
	std::string content;
}Event;

typedef struct
{
	std::string dayName;
	std::vector<Event> eventList;
}DayLog;

class Diary
{
public:
	static std::vector<DayLog> mainLog;
	static std::string Date;
	static void NewDay(std::string Date);
	static void NewEvent(std::string, std::string);
};