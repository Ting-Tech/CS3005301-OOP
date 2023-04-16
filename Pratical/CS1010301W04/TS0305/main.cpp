// Author: ¾G°·§Ê (B11130225@mail.ntust.edu.tw)
// Create Date: March 22, 2023
// Last Update: March 22, 2023
// Description: Draw square, isosceles right triangle and lines on the console.

#include<iostream>
#include<vector>
#include<string>

#define BACKGROUND_CHAR '*'
#define FILL_CHAR 'X'

using namespace std;

typedef vector<vector<char>> Board;
bool drawLine(int x1, int y1, int x2, int y2, int maxX, int maxY, Board& board);
bool drawSquare(int w, int x, int y, int maxX, int maxY, Board& board);
bool drawTriangle(int w, int startX, int startY, string modeT, int maxX, int maxY, Board& board);
void printBoard(Board& board);

int main()
{
	bool isValid = true;
	string mode, modeT;
	int m = 0, n = 0, w = 0, x = 0, y = 0, x2 = 0, y2 = 0, modeTriangleDir = 0;
	cin >> m >> n;
	Board board(n, vector<char>(m, BACKGROUND_CHAR));
	// Do the corresponding drawing according to the required action, and end if "EXIT" is received
	while (cin >> mode && !cin.eof())
	{
		if (mode == "EXIT")
			break;
		switch (mode[0])
		{
		// Draw Square
		case 'S':
			cin >> w >> x >> y;
			isValid = drawSquare(w, x, y, m, n, board);
			break;
		// Draw Triangle
		case 'T':
			cin >> w >> x >> y >> modeT;
			isValid =  drawTriangle(w, x, y, modeT, m, n, board);
			break;
		// Draw Line
		case 'L':
			cin >> x >> y >> x2 >> y2;
			isValid =  drawLine(x, y, x2, y2, m, n, board);
			break;
		default:
			break;
		}
		// Output "Out of range." if it cannot be drawn
		if (isValid)
		{
			printBoard(board);
		}
		else
		{
			cout << "Out of range." << endl;
		}
		cout << endl;
	}
}

//Intent: Drawing square
//Pre: Size, starting point, size of chart frame, chart
//Post: Is drawing valid
bool drawSquare(int w, int x, int y, int maxX, int maxY, Board &board)
{

	if ((x + w) > maxX || (y + w) > maxY)
	{
		return false;
	}
	else
	{
		for (int iX = 0; iX < w; iX++)
		{
			for (int iY = 0; iY < w; iY++)
			{
				int indexX = 0, indexY = 0;
				indexX = x + iX;
				indexY = y + iY;
				board[indexY][indexX] = FILL_CHAR;
			}
		}
		return true;
	}
}

//Intent: Drawing triangle
//Pre: Number of triangle layers, cartesian coordinate point, triangle direction, size of chart frame, chart
//Post: Is drawing valid
bool drawTriangle(int w, int startX, int startY, string modeT, int maxX, int maxY, Board& board)
{
	int dirX = 0, dirY = 0, x1 = 0, y2 = 0;
	if (modeT == "LU")
		dirX = -1, dirY = -1;
	if (modeT == "LD")
		dirX = -1, dirY = 1;
	if (modeT == "RU")
		dirX = 1, dirY = -1;
	if (modeT == "RD")
		dirX = 1, dirY = 1;

	w = w - 1;
	int indexMaxX = maxX - 1;
	int indexMaxY = maxY - 1;
	if (startX + (dirX * w) > indexMaxX || startY + (dirY * w) > indexMaxY || startX + (dirX * w) < 0 || startY + (dirY * w) < 0)
	{
		return false;
	}
	else
	{
		for (int i = 0; i <= w; i++)
		{
			x1 = startX + (dirX * i);
			y2 = startY + (dirY * i);
			drawLine(x1, startY, startX, y2, maxX, maxY, board);
		}
		return true;
	}
}

//Intent: Drawing line
//Pre: Coordinates of four points, size of chart frame, chart
//Post: Is drawing valid
bool drawLine(int x1, int y1, int x2, int y2, int maxX, int maxY, Board &board)
{
	int deltaX = 0, deltaY = 0, dirX = 1, dirY = 1, width = 0;
	int indexMaxX = maxX - 1;
	int indexMaxY = maxY - 1;
	if (x1 > indexMaxX || y1 > indexMaxY || x2 > indexMaxX || y2 > indexMaxY || x1 < 0 || y2 < 0 || x2 < 0 || y2 < 0)
	{
		return false;
	}
	else
	{
		deltaX = x2 - x1;
		deltaY = y2 - y1;
		if (deltaX < 0)
			dirX = -1;
		if (deltaX == 0)
			dirX = 0;
		if (deltaY < 0)
			dirY = -1;
		if (deltaY == 0)
			dirY = 0;
		if (deltaX > deltaY)
		{
			width = abs(deltaX);
		}
		else
		{
			width = abs(deltaY);
		}

		for (int i = 0; i <= width; i++)
		{
			int indexX = 0, indexY = 0;
			indexX = x1 + (i * dirX);
			indexY = y1 + (i * dirY);
			board[indexY][indexX] = FILL_CHAR;
		}
		return true;
	}
}

//Intent: Draw pictures
//Pre: The picture parameters to draw
//Post: Result picture
void printBoard(Board& board)
{
	for (const auto& i : board)
	{
		for (const auto& j : i)
			cout << j;

		cout << endl;
	}
}