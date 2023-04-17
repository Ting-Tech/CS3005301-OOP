/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: April 16, 2023
Last Update: April 17, 2023
Describition: Large number calculation.
*/

#include <iostream>
#include "BigNum.hpp"

using namespace std;

int main() {
	for (string num1, num2; (cin >> num1 >> num2) && !cin.eof();) {
		BigInt n1(num1);
		BigInt n2(num2);

		BigInt sum = n1 + n2;
		BigInt diff = n1 - n2;
		BigInt mul = n1 * n2;

		cout
			<< sum.toStr() << endl
			<< diff.toStr() << endl
			<< mul.toStr() << endl;
	}

	return 0;
}