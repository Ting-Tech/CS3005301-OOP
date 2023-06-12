/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 12, 2023
Last Update: June 12, 2023
Describition: Library Database
*/

#pragma once
#include "Book.h"

struct SortByAuthor
{
	bool operator() (const Book& lhs, const Book& rhs) const
	{
		if (lhs.author == rhs.author) return lhs.title < rhs.title;
		return lhs.author < rhs.author;
	}
};