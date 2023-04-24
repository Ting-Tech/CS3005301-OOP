/*
Author: 鄭健廷(B11130225@mail.ntust.edu.tw)
Date: April 24, 2023
Last Update: April 24, 2023
Describition: Simulate the process of writing and reading memory data.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<uint8_t> memory;
bool inRange(int pos, int size);

int main()
{
	int size, numberInstruction;
	cin >> size >> numberInstruction;

	memory.resize(size, 0b00000000);

	for (size_t i = 0; i < numberInstruction; i++)
	{
		string command, type;
		int pos;
		cin >> command >> pos >> type;
		if (command == "Set")
		{
			if (type == "char")
			{
				if (!inRange(pos, 1))
				{
					cout << "Violation Access." << endl;
					continue;
				}

				uint32_t val;

				cin >> val;

				if (val > 255)
					val = 255;

				memory[pos] = val;
			}
			else if (type == "short")
			{
				const size_t DATA_SIZE = 2;

				if (!inRange(pos, DATA_SIZE))
				{
					cout << "Violation Access." << endl;
				}

				uint16_t val;

				cin >> val;

				for (int i = pos;
					i < (pos + DATA_SIZE) && i < memory.size();
					val >>= 8, i++)
					memory[i] = (uint8_t)(val & 0xff);
			}
			else if (type == "int")
			{
				const size_t DATA_SIZE = 4;

				if (!inRange(pos, DATA_SIZE))
				{
					cout << "Violation Access." << endl;
				}

				uint32_t val;

				cin >> val;

				for (int i = pos;
					i < (pos + DATA_SIZE) && i < memory.size();
					val >>= 8, i++)
					memory[i] = (uint8_t)(val & 0xff);
			}
			else if (type == "String")
			{
				string val;

				cin.get();
				getline(cin, val);

				size_t data_size = val.length();

				if (!inRange(pos, data_size))
				{
					cout << "Violation Access." << endl;
				}

				for (int i = pos, j = 0;
					i < (pos + data_size) && i < memory.size();
					i++, j++)
					memory[i] = val[j];
			}
		}
		else if (command == "Get")
		{
			if (type == "char")
			{
				if (!inRange(pos, 1))
				{
					cout << "Violation Access." << endl;
					continue;
				}

				uint32_t val;
				val = memory[pos];

				cout << val << endl;
			}
			else if (type == "short")
			{
				const size_t DATA_SIZE = 2;

				if (!inRange(pos, DATA_SIZE))
				{
					cout << "Violation Access." << endl;
					continue;
				}

				uint16_t val = 0;

				for (int i = (pos + DATA_SIZE - 1); i >= pos; i--)
				{
					val <<= 8;
					val |= (uint16_t)(memory[i] & 0xff);
				}

				cout << val << endl;
			}
			else if (type == "int")
			{
				const size_t DATA_SIZE = 4;

				if (!inRange(pos, DATA_SIZE))
				{
					cout << "Violation Access." << endl;
					continue;
				}

				uint32_t val = 0;

				for (int i = (pos + DATA_SIZE - 1); i >= pos; i--)
				{
					val <<= 8;
					val |= (uint32_t)(memory[i] & 0xff);
				}

				cout << val << endl;
			}
			else if (type == "String")
			{
				for (int i = pos;
					i < memory.size() && memory[i] != '\0'; i++)
				{
					cout << memory[i];
				}

				cout << endl;
			}
		}
	}
	return 0;
}

bool inRange(int pos, int size)
{
	return ((pos + size) <= memory.size());
}