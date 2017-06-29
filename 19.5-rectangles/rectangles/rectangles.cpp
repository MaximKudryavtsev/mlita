// rectangles.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

__int64 getAmountRectangles(__int64 a, __int64 b)
{
	__int64 counter = 0;
	while (b != 0)
	{
		if (a < b)
		{
			swap(a, b);
		}
		counter = counter + a / b;
		a = a % b;
		swap(a, b);
	}
	return counter;
}

int main(int argc, char* argv[])
{
	__int64 a;
	__int64 b;
	ifstream input("input.txt");
	ofstream output("output.txt");
	input >> a >> b;
	output << getAmountRectangles(a, b);
}
