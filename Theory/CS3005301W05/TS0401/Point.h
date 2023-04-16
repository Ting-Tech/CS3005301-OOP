/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Store and manipulate the position of the point on the screen.
*/

#ifndef Point_H
#define Point_H
#include <iostream>
using namespace std;

class Point
{
private:
	int vertical;
	int horizontal;

public:
	Point()
	{
		vertical = 0;
		horizontal = 0;
	}
	// Intent: Reset the coordinate position of the point by the given the x and y.
	// Pre: Variable vertical is x value, horizontal is y value
	void Set(int vertical, int horizontal);

	// Intent: Move the current point x pixels on the x-axis and y pixels on the y-axis.
	// Pre: Variable x is x-axis and y is y-axis
	void Move(int x, int y);

	// Intent: Rotate this point 90 degrees clockwise from the origin.
	void Rotate();

	// Intent: Get the value x of the point.
	// Pre: Rseturns value x
	int RetrieveVertical() const { return vertical; }

	// Intent: Get the value y of the point.
	// Pre: Return value y
	int RetrieveHorizontal() const { return horizontal; }
};

#endif //Point_H