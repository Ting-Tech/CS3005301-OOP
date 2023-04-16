/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 5 2023
Last Update: April 5 2023
Description: A definition of a class named Point that might be used to store 
			 and manipulate the location of a point in the plane.
*/

#include <algorithm>

#include "Point.h"

Point::Point()
{
	this->_vertical = 0;
	this->_horizontal = 0;
}

Point::~Point() { }

Point::Point(const Point& p)
{
	_vertical = p._vertical;
	_horizontal = p._horizontal;
}

void Point::Set(int horizontal, int vertical)
{
	this->_vertical = vertical;
	this->_horizontal = horizontal;
}

void Point::Move(int horizontal, int vertical)
{
	this->_vertical += vertical;
	this->_horizontal += horizontal;
}

void Point::Rotate()
{
	std::swap(this->_horizontal, this->_vertical);
	this->_vertical *= -1;
}

void Point::Reflect()
{
	this->_vertical *= -1;
	this->_horizontal *= -1;
}

int Point::GetVertical()
{
	return (this->_vertical);
}

int Point::GetHorizontal()
{
	return (this->_horizontal);
}