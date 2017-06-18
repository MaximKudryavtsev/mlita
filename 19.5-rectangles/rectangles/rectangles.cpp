// rectangles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

long long getAmountRectangles(long long width, long long length)
{
	long long counter = 1;
	while (length != width)
	{
		if (length > width)
		{
			length = length - width;
		}
		else
		{
			width = width - length;
		}
		counter++;
	}
	return counter;
}

int main(int argc, char* argv[])
{
	long long length;
	long long width;
	ifstream input("input.txt");
	ofstream output("output.txt");
	input >> length >> width;
	output << getAmountRectangles(width, length);
}

