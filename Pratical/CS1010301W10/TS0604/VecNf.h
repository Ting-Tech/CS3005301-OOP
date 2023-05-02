#pragma once
#include<iostream>
#include<vector>

using namespace std;

class VecNf
{
private:
	vector<float> numVec;

public:
	VecNf();
	VecNf(float*, int);
	VecNf(const VecNf&);
	int Size();

	VecNf& operator=(const VecNf&);
	float& operator[](int);

	friend VecNf operator+(const VecNf&, const VecNf&);
	friend VecNf operator-(const VecNf&, const VecNf&);
	friend float operator*(const VecNf&, const VecNf&);
	friend VecNf operator*(const VecNf&, float);
	friend VecNf operator*(float, const VecNf&);
};