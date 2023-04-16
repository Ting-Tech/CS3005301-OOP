/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Store and manipulate the position of the point on the screen.
*/

#include "Point.h"

void Point::Set(int vertical, int horizontal)
{
	this->vertical = vertical;
	this->horizontal = horizontal;
}

void Point::Move(int x, int y)
{
	this->vertical += x;
	this->horizontal += y;
}
void Point::Rotate()
{
	swap(this->vertical, this->horizontal);
	this->horizontal *= -1;
}
