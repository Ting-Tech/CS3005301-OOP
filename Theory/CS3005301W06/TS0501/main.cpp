/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 3 2023
Last Update: April 3 2023
Description: Manage his hot dog stores
*/

#include <iostream>
#include "HotDogStand.h"
using namespace std;

int main() {
	HotDogStand stand1("Stand1", 0);
	HotDogStand stand2("Stand2", 100);
	HotDogStand stand3("Stand3");
	stand1.justSold();
	stand2.justSold();
	stand3.justSold();
	stand1.print();
	stand2.print();
	stand3.print();
	std::cout << "Total Sold : " << HotDogStand::allStandSoldAmount() << std::endl;
	return 0;

}