/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: June 5, 2023
Last Update: June 5, 2023
Describition: Binary Search
*/

#pragma once
#include <iostream>

template <typename T>
void ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{

	found = false;
	while (last >= first)
	{
		int mid = (first + last) / 2;

		if (a[mid] == key)
		{
			location = mid;
			found = true;
			break;
		}

		else if (key < a[mid])
		{
			last = mid - 1;
		}
		else if (key > a[mid])
		{
			first = mid + 1;
		}
	}
}

template <typename T>
void RecBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
	if (first > last)
		return;

	found = false;

	int mid = (first + last) / 2;

	if (a[mid] == key)
	{
		location = mid;
		found = true;
	}
	else if (key < a[mid])
	{
		RecBinarySearch(a, first, mid - 1, key, found, location);
	}
	else if (key > a[mid])
	{
		RecBinarySearch(a, mid + 1, last, key, found, location);
	}
}