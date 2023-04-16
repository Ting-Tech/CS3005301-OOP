/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 27 2023
Last Update: March 27 2023
Description: Store and manipulate the position of the point on the screen.
*/

#include <iostream>
#include "Point.h"
using namespace std;

int main(void) {
	Point point;

	point.Set(0, 5);
	cout << point.RetrieveVertical() << " " << point.RetrieveHorizontal() << endl;

	point.Move(1, 2);
	cout << point.RetrieveVertical() << " " << point.RetrieveHorizontal() << endl;
	for (int i = 0; i < 4; i++) {
		point.Rotate();
		cout << point.RetrieveVertical() << " " << point.RetrieveHorizontal() << endl;
	}

	return 0;
}