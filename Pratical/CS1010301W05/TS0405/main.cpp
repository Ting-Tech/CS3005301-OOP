/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Create Date: March 28 2023
Last Update: March 28 2023
Description: Find the maximum Collatz conjecture cycle length.
*/

#include<iostream>

using namespace std;

int collatzConjecture(int a);

int main()
{
    int startNum = 0, endNum = 0, min = 0;
    while (cin >> startNum >> endNum && !cin.eof())
    {
        int maxNum = 0;
        min = startNum;
        if (startNum > endNum)
        {
            min = endNum;
        }
        // Find the max Collatz conjecture cycle lentgh
        for (size_t i = 0; i <= abs(startNum - endNum); i++)
        {
            if (maxNum < collatzConjecture(i + min))
            {
                maxNum = collatzConjecture(i + min);
            }
        }
        cout << startNum << " " << endNum << " " << maxNum << endl;
    }
    return 0;
}

// Intent: Calculate the Collatz conjecture cycle length
// Pre: One number input
// Post: Collatz conjecture cycle length
int collatzConjecture(int a)
{
    int time = 1;
    while (a != 1)
    {
        time++;
        if (a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a = (3 * a) + 1;
        }
    }
    return time;
}