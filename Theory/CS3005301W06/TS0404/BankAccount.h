/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: April 3 2023
Last Update: April 3 2023
Description: Simulate bank deposits
*/

class BankAccount {
private:
	int balance;
	static int total;
public:
	// Reset the variable
	BankAccount();

	// Pre: The variable is pre saved money
	BankAccount(int input);

	// Indent: Withdraw money from account
	// Pre: The variable is money to withdraw
	void withdraw(int output);

	// Indent: Save money to account
	// Pre: The variable input is money to save
	void save(int input);

	// Indent: Get balance money from account
	// Post: Returns the balance from account
	int getBalance();

	// Indent: Get all money from bank
	// Post: Returns the all money from bank
	static int getAllMoneyInBank();
};