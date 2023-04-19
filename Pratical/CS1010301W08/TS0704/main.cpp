// Name: ¾G°·§Ê
// Date: 2023/04/19
// Last Update: 2023/04/19
// Problem statement: Levenshtein Distance

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
    for (string str1, str2; getline(cin, str1) && getline(cin, str2);)
    {
        size_t lenStr1 = str1.length();
        size_t lenStr2 = str2.length();
        vector<vector<int>> vectorLd((lenStr2 + 1), vector<int>((lenStr1 + 1), 0));

        if (lenStr1 == 0)
            return lenStr2;
        if (lenStr2 == 0)
            return lenStr1;

        for (int x = 0; x <= lenStr1; x++)
            vectorLd[0][x] = x;
        for (int y = 0; y <= lenStr2; y++)
            vectorLd[y][0] = y;

        for (size_t i = 0; i < lenStr2; i++)
        {
            for (size_t j = 0; j < lenStr1; j++)
            {
                if (str1[j] == str2[i])
                    vectorLd[i + 1][j + 1] = vectorLd[i][j];
                else
                    vectorLd[i + 1][j + 1] = min(min(vectorLd[i][j], vectorLd[i + 1][j]), vectorLd[i][j + 1]) + 1;
            }
        }
        cout << vectorLd[lenStr2][lenStr1] << '\n';
    }
}