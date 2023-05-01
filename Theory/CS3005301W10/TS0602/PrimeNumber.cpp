/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 1, 2023
Last Update: May 1, 2023
Describition: Stores a prime number.
*/

#include"PrimeNumber.h"

inline bool isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;

	return true;
}

int PrimeNumber::get() const
{
	return this->value;
}

PrimeNumber::PrimeNumber()
{
	this->value = 1;
}

PrimeNumber::PrimeNumber(int _value)
{
	this->value = _value;
}

PrimeNumber& PrimeNumber::operator++()
{
	for (this->value++; !isPrime(this->value); this->value++);
	return (*this);
}

PrimeNumber PrimeNumber::operator++(int)
{
	PrimeNumber temporary = (*this);
	for (this->value++; !isPrime(this->value); this->value++);
	return temporary;
}

PrimeNumber& PrimeNumber::operator--()
{
	for (this->value--; !isPrime(this->value); this->value--);
	return (*this);
}

PrimeNumber PrimeNumber::operator--(int)
{
	PrimeNumber temporary = (*this);
	for (this->value--; !isPrime(this->value); this->value--);
	return temporary;
}