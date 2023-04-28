#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class BigNum {
private:
    string numA;
    string numB;
    char calWay;
    int n1Size, n2Size;
public:
    BigNum();
    ~BigNum();
    void numSize(string num1, string num2);
    void numSet(string num1, string num2);
    char resultSymbol(string num1, char calWay, string num2);
    string sum(string num1, string num2);
    string difference(string num1, string num2);
    string product(string num1, string num2);
};