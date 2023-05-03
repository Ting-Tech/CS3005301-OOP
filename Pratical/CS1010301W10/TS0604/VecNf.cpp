/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 3, 2023
Last Update: May 3, 2023
Describition: Store a multidimensional vector and implement some simple vector operations
*/

#include"VecNf.h"

VecNf::VecNf()
{
	numVec = { 0.0f };
}

VecNf::VecNf(float* dest, int cnt)
{
	for (size_t i = 0; i < cnt; i++)
	{
		numVec.push_back(dest[i]);
	}
}

VecNf::VecNf(const VecNf& rhs)
{
	numVec = rhs.numVec;
}

VecNf& VecNf::operator=(const VecNf& vecnf)
{
	std::cout << "ASSIGNMENT!!!\n";
	numVec = vecnf.numVec;
	return (*this);
}

float& VecNf::operator[](int index)
{
	return numVec[index];
}

int VecNf::Size()
{
	return this->numVec.size();
}

VecNf operator+(const VecNf& v1, const VecNf& v2)
{
	VecNf result;
	result.numVec.clear();
	if (v1.numVec.size() != v2.numVec.size())
	{
		cout << "dimensions inconsistent\n";
		return result;
	}
	for (size_t i = 0; i < v1.numVec.size(); i++)
	{
		result.numVec.push_back(v1.numVec[i] + v2.numVec[i]);
	}
	return result;
}

VecNf operator-(const VecNf& v1, const VecNf& v2)
{
	VecNf result;
	result.numVec.clear();
	if (v1.numVec.size() != v2.numVec.size())
	{
		cout << "dimensions inconsistent\n";
		return result;
	}
	for (size_t i = 0; i < v1.numVec.size(); i++)
	{
		result.numVec.push_back(v1.numVec[i] - v2.numVec[i]);
	}
	return result;
}

float operator*(const VecNf& v1, const VecNf& v2)
{
	float result = 0;
	if (v1.numVec.size() != v2.numVec.size())
	{
		cout << "dimensions inconsistent\n";
		return result;
	}
	for (size_t i = 0; i < v1.numVec.size(); i++)
	{
		result += v1.numVec[i] * v2.numVec[i];
	}
	return result;
}

VecNf operator*(const VecNf& v1, float num)
{
	VecNf result;
	result.numVec.clear();
	for (size_t i = 0; i < v1.numVec.size(); i++)
	{
		result.numVec.push_back(v1.numVec[i] * num);
	}
	return result;
}

VecNf operator*(float num, const VecNf& v1)
{
	VecNf result;
	result.numVec.clear();
	for (size_t i = 0; i < v1.numVec.size(); i++)
	{
		result.numVec.push_back(v1.numVec[i] * num);
	}
	return result;
}
