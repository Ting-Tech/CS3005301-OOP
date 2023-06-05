/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 5, 2023
Last Update: June 5, 2023
Describition: Absolute value
*/

#pragma once
#include<iostream>

template <typename T>
double absoluteValue(T num1, T num2)
{
	T result = std::abs(num1 - num2);
	return result;
}