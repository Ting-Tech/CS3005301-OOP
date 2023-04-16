/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 3 2023
Last Update: April 3 2023
Description: Simulate bank deposits
*/

#include "BankAccount.h"

int BankAccount::total = 0;

BankAccount::BankAccount()
{
	this->balance = 0;
}

BankAccount::BankAccount(int input)
{
	this->balance = 0;
	this->save(input);
}

void BankAccount::withdraw(int output)
{
	this->balance -= output;
	BankAccount::total -= output;
}

void BankAccount::save(int input)
{
	this->balance += input;
	BankAccount::total += input;
}

int BankAccount::getBalance()
{
	return (this->balance);
}

int BankAccount::getAllMoneyInBank()
{
	return (BankAccount::total);
}