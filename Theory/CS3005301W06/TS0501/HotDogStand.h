/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 3 2023
Last Update: April 3 2023
Description: Manage his hot dog stores
*/

#pragma once
#include<iostream>

class HotDogStand
{
public:
	// Reset value
	HotDogStand();

	// Pre: The variable id is the stand id
	HotDogStand(const char* id);

	// Pre: The variable id is the stand id,
	//      amount is start number of sell amount
	HotDogStand(const char* id, int amount);

	~HotDogStand();

	// Indent: Sold one hot dog from the stand
	void justSold();

	// Indent: Print the id and sales separated by spaces
	void print();

	// Indent: Get sold amount of the stand
	// Post: Returns the sold amount of the stand
	int thisStandSoldAmount();

	// Indent: Get sold amount of all stands
	// Post: Returns the sold amount of all stands
	static int allStandSoldAmount();
private:
	char *standId;
	int hotDogSellAmount;
	static int totalSellAmount;
};