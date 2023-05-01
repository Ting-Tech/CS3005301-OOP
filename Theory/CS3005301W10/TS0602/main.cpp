/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 1, 2023
Last Update: May 1, 2023
Describition: Stores a prime number.
*/

#include "PrimeNumber.h"
#include <iostream>

using namespace std;

int main()
{	
	PrimeNumber p1, p2(13);	
	PrimeNumber a = ++p1;
	PrimeNumber b = p2++;
	cout << a.get() << endl;
	cout << p1.get() << endl;
	cout << b.get() << endl;
	cout << p2.get() << endl;
	return 0;
}
