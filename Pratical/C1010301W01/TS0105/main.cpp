/*
Author: ¾G°·§Ê B11130225 (B11130225@mail.ntust.edu.tw)
Create: time 2023/3/6
Editor: ¾G°·§Ê B11130225 (B11130225@mail.ntust.edu.tw)
Last edit time: 2023/3/7
Discription: This program is to compute and output the volume of a sphere with radius r.
*/

#include<iostream>
#include<cmath>
//define that PI = 3.14159265358979323846
#define PI  3.14159265358979323846

using namespace std;

int main()
{
	double r = 0, result = 0;
	while (true)
	{
		cin >> r;
		//Identify wheather the input is EOF
		if (cin.eof())
		{
			break;
		}
		else
		{
			//compute and output the volume of a sphere with radius r
			result = (4 * PI / 3) * pow(r, 3);
			//Set the decimal point to the sixth place
			cout.precision(6);
			cout << fixed << result << endl;
		}

	}
}