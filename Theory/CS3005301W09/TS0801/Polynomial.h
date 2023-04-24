/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: April 24, 2023
Last Update: April 24, 2023
Describition: Handle one-dimensional polynomials
*/

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Polynomial
{
private:
	std::vector<double> coefficients;

public:
	Polynomial();
	Polynomial(double*, int);
	Polynomial(const Polynomial&);

	int mySize() const;

	Polynomial& operator=(const Polynomial&);
	double& operator[](const unsigned int);

	friend Polynomial operator+(const Polynomial&, const Polynomial&);
	friend Polynomial operator+(const Polynomial&, const double&);
	friend Polynomial operator+(const double&, const Polynomial&);

	friend Polynomial operator-(const Polynomial&, const Polynomial&);
	friend Polynomial operator-(const Polynomial&, const double&);
	friend Polynomial operator-(const double&, const Polynomial&);

	friend Polynomial operator*(const Polynomial&, const Polynomial&);
	friend Polynomial operator*(const Polynomial&, const double&);
	friend Polynomial operator*(const double&, const Polynomial&);

	friend double evaluate(const Polynomial&, double);
};
