/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 5 2023
Last Update: April 5 2023
Description: A definition of a class named Point that might be used to store
			 and manipulate the location of a point in the plane.
*/

#include<iostream>
#include"Point.h"
using namespace std;
int main(void) {
	Point point;
	point.Set(0, 5);
	cout << point. GetHorizontal() << " " << point. GetVertical() << endl;
	point.Reflect();
	cout << point. GetHorizontal() << " " << point. GetVertical() << endl;
	point.Move(1, 2);
	cout << point. GetHorizontal() << " " << point. GetVertical() << endl;
	point.Rotate();
	cout << point.GetHorizontal() << " " << point.GetVertical() << endl;
	Point copy = point;
	cout << "Copy point:" << endl;		
	cout << copy. GetHorizontal() << " " << copy. GetVertical() << endl;
	return 0;
}
