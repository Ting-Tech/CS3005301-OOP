/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 1, 2023
Last Update: May 1, 2023
Describition: Complex numbers.
*/

#include"Complex.h"

Complex::Complex()
{
	this->realValue = 0;
	this->imaginaryValue = 0;
}

//~Complex();
Complex::Complex(double r)
{
	this->realValue = r;
	this->imaginaryValue = 0;
}

//~Complex(double r);
Complex::Complex(double r, double i)
{
	this->realValue = r;
	this->imaginaryValue = i;
}
//~Complex(double r, double i);
double Complex::real()
{
	return this->realValue;
}

double Complex::imag()
{
	return this->imaginaryValue;
}

double Complex::norm()
{
	return sqrt(pow(this->imaginaryValue, 2) + pow(this->realValue, 2));
}

double real(Complex c)
{
	return c.real();
}

double imag(Complex c)
{
	return c.imag();
}

double norm(Complex c)
{
	return c.norm();
}

Complex Complex::operator+(Complex c)
{
	Complex r = (*this);
	r.realValue += c.realValue;
	r.imaginaryValue += c.imaginaryValue;
	return r;
}

Complex Complex::operator-(Complex c)
{
	Complex r;
	r.realValue = this->realValue;
	r.imaginaryValue = this->imaginaryValue;
	r.realValue -= c.realValue;
	r.imaginaryValue -= c.imaginaryValue;
	return r;
}

Complex Complex::operator*(Complex c)
{
	Complex r;
	r.realValue = ((this->realValue * c.realValue) -
		(this->imaginaryValue * c.imaginaryValue));
	r.imaginaryValue = ((this->imaginaryValue * c.realValue) +
		(this->realValue * c.imaginaryValue));
	return r;
}

Complex Complex::operator/(Complex c)
{
	Complex r;
	r.realValue = (
		(
			(this->realValue * c.realValue)
			+
			(this->imaginaryValue * c.imaginaryValue)
			)
		/
		(pow(c.realValue, 2) + pow(c.imaginaryValue, 2))
		);
	r.imaginaryValue = (
		(
			(this->imaginaryValue * c.realValue)
			-
			(this->realValue * c.imaginaryValue)
			)
		/
		(pow(c.realValue, 2) + pow(c.imaginaryValue, 2))
		);
	return r;
}

Complex operator+(double d, Complex c)
{
	return (Complex(d) + c);
}

Complex operator-(double d, Complex c)
{
	return (Complex(d) - c);
}

Complex operator*(double d, Complex c)
{
	return (Complex(d) * c);
}

Complex operator/(double d, Complex c)
{
	return (Complex(d) / c);
}

bool operator==(Complex c1, Complex c2)
{
	return (
		(c1.realValue == c2.realValue)
		&&
		(c1.imaginaryValue == c2.imaginaryValue)
		);
}

ostream& operator<<(ostream& strm, const Complex& c)
{
	strm << c.realValue << " + " << c.imaginaryValue << "*i";
	return strm;
}

istream& operator>>(istream& strm, Complex& c)
{
	string s;
	getline(strm, s);
	sscanf_s(s.c_str(), "%*c = %lf + %lf*i",
		&(c.realValue), &(c.imaginaryValue));
	return strm;
}