/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: April 12, 2023
Last Update: April 17, 2023
Describition: Convert a string into an integer.
*/

#include <iostream>
#include "Atoi.h"

int main() {
	string beTrans;

	while (cin >> beTrans) {
		Atoi atoi(beTrans + "20");
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}

		atoi.SetString(beTrans);
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
	}

	return 0;
}