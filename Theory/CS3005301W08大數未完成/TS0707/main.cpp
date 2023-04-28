#include<iostream>
#include<string>
#include<vector>

using namespace std;

string BigNumAdd(string strNum1, string strNum2);
string NumSubtraction(string a, string b);
string multiply(string num1, string num2);
bool isFrontLarge(string strNum1, string strNum2);
char resultSymbol(string strNum1, string strNum2, char calSymbol);
bool isNegativeLarger(string strNum1, string strNum2);

int main()
{
    string numA, numB;
    cin >> numA >> numB;
    cout << BigNumAdd(numA, numB) << endl;
    cout << NumSubtraction(numA, numB) << endl;
    cout << multiply(numA, numB) << endl;
}

bool isFrontLarge(string strNum1, string strNum2)
{
    if ((strNum1[0] == '-') && (strNum2[0] != '-') || (strNum1[0] != '-') && (strNum2[0] == '-'))
    {
        if (strNum1[0] == '-')
            return false;
        else
            return true;
    }
    else
    {
        int num1Len, num2Len, firstNum1, firstNum2;
        num1Len = strNum1.length();
        num2Len = strNum2.length();
        firstNum1 = strNum1[0];
        firstNum2 = strNum2[0];
        if (strNum1[0] == '-')
        {
            num1Len -= 1;
            strNum1 = strNum1[1];
        }
        if (strNum2[0] == '-')
        {
            num2Len -= 1;
            strNum2 = strNum2[1];
        }
        if (strNum1[0] == '-' && strNum2[0] == '-')
        {
            if (num1Len == num2Len)
            {
                return firstNum1 < firstNum2;
            }
            else
                return num1Len < num2Len;
        }
        else
        {
            if (num1Len == num2Len)
            {
                return firstNum1 > firstNum2;
            }
            else
                return num1Len > num2Len;
        }
    }
}

bool isNegativeLarger(string strNum1, string strNum2)
{
    int num1Len, num2Len, firstNum1, firstNum2;
    num1Len = strNum1.length();
    num2Len = strNum2.length();
    firstNum1 = strNum1[0];
    firstNum2 = strNum2[0];
    if (strNum1[0] != '-' || strNum2[0] != '-')
    {
        return false;
    }
    else
    {
        if (strNum1[0] == '-')
        {
            num1Len -= 1;
            strNum1 = strNum1[1];
        }
        if (strNum2[0] == '-')
        {
            num2Len -= 1;
            strNum2 = strNum2[1];
        }
        if (num1Len == num2Len)
        {
            if (strNum1[0] == '-')
            {
                return firstNum1 > firstNum2;
            }
            else
            {
                return firstNum2 > firstNum1;
            }
        }
        else
        {
            if (strNum1[0] == '-')
            {
                return num1Len > num2Len;
            }
            else
            {
                return num2Len > num1Len;
            }
        }
    }
}

char dealSymbol(string& strNum1, string& strNum2, char calSymbol)
{
    bool frontLarge = isFrontLarge(strNum1, strNum2);
    switch (calSymbol)
    {
    case '*':
        if ((strNum1[0] == '-') && (strNum2[0] == '+') || (strNum1[0] == '+') && (strNum2[0] == '-'))
            return '-';
        break;

    case '+' :
        if ((strNum1[0] == '-') && (strNum2[0] == '-') || isNegativeLarger(strNum1, strNum2))
        {
            return '-';
            break;
        }

    case '-' :
        if ((strNum1[0] == '-') && (strNum2[0] == '-'))
        {
            return '-';
            break;
        }

    default:
        return '+';
        break;
    }
    if (strNum1[0] == '-')
    {
        strNum1.erase(0);
    }
    if (strNum2[0] == '-')
    {
        strNum2.erase(0);
    }
}

void calcualte(string strNum1, string strNum2, char symbol)
{
    switch (symbol)
    {
    case '+':
        if ((strNum1[0] == '-') && (strNum2[0] == '+') || (strNum1[0] == '+') && (strNum2[0] == '-'))
        {

        }
        else
        {

        }
    case '-':
        if ((strNum1[0] == '-') && (strNum2[0] == '+') || (strNum1[0] == '+') && (strNum2[0] == '-'))
        {

        }
        else
        {

        }
    case '*':

    default:
        break;
    }
}

string BigNumAdd(string strNum1, string strNum2)
{
   
}

string NumSubtraction(string num1, string num2)
{
    
}

string multiply(string num1, string num2) 
{
    
}