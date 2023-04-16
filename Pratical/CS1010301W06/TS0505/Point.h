/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 5 2023
Last Update: April 5 2023
Description: A definition of a class named Point that might be used to store
			 and manipulate the location of a point in the plane.
*/

#pragma once

class Point
{
private:
	int _vertical;
	int _horizontal;

public:
	Point();

	~Point();

	Point(const Point& p);

	// Intent: Set the coordinate position
	//         of the point by the given the horizontal and vertical
	// Pre: The variable vertical is vertical value,
	//      horizontal is horizontal value
	void Set(int horizontal, int vertical);

	// Intent: Move the point
	// Pre: The variable horizontal and vertical is move size
	void Move(int horizontal, int vertical);

	// Intent: Rotate the point 90 degrees clockwise from the origin
	void Rotate();

	// Intent: Reflect the point in the origin
	void Reflect();

	// Intent: Get the value vertical of the point
	// Post: The function returns value vertical
	int GetVertical();

	// Intent: Get the value horizontal of the point
	// Post: The function returns value horizontal
	int GetHorizontal();
};