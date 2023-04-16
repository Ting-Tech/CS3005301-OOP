/**
 * @ Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Create Time: 2023-03-01
 * @ Modified by: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
 * @ Modified time: 2023-03-06
 * @ Description: This C++ program is to convert the format of n from (seconds) to (hours: minutes: seconds).
 */

#include<iostream>

using namespace std;

int main()
{
	uint64_t n = 0;
	uint64_t hour = 0, min = 0, sec = 0;
	while (true)
	{
		//input number
		cin >> n;
		//identify wheather is eof
		if (!cin.eof())
		{
			//convert to seconds minutes hours
			sec = n % 60;
			min = n / 60;
			hour = min / 60;
			min = min % 60;
			//output the result
			cout << hour << " hours " << min << " minutes and " << sec << " seconds\n";
		}
		else
		{
			//if eof skip this round
			break;
		}
	}
	return 0;
}