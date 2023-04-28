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
	return sqrt((pow(this->imaginaryValue, 2) + pow(this->realValue, 2)));
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

}

Complex Complex::operator-(Complex c)
{

}

Complex Complex::operator*(Complex c)
{

}

Complex Complex::operator/(Complex c)
{

}

Complex operator+(double d, Complex c)
{

}

Complex operator-(double d, Complex c)
{

}

Complex operator*(double d, Complex c)
{

}

Complex operator/(double d, Complex c)
{

}

bool operator==(Complex c1, Complex c2)
{
	return real(c1) == (real(c2) && imag(c1) == imag(c2));
}

ostream& operator<<(ostream& strm, const Complex& c)
{

}

istream& operator>>(istream& strm, Complex& c)
{

}