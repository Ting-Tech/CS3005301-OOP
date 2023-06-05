/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 5, 2023
Last Update: June 5, 2023
Describition: Exception handler
*/

#pragma once
#include <iostream>
#include <exception>

using namespace std;

class InsufficientFunds : public std::exception
{
public:
	InsufficientFunds() {}
};

class NegativeDeposit : public std::exception
{
public:
	NegativeDeposit() {}
};

class Account
{
private:
	double balance;
public:
	Account() { balance = 0; }
	Account(double initialDeposit) { balance = initialDeposit; }
	double getBalance() { return balance; }

	//returns new balance or -1 if error 
	double deposit(double amount)
	{
		if (amount > 0) 
			balance += amount;
		else
			throw NegativeDeposit();
		return balance;
	}

	//return new balance or -1 if invalid amount 
	double withdraw(double amount)
	{
		if ((amount > balance) || (amount < 0))
			throw InsufficientFunds();
		else 
			balance -= amount;
		return balance;
	}
};
