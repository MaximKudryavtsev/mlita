// domino.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

int NumberOfOptions(int sideLength)
{
	int current = 0;
	int prev = 1;
	for (int i = 0; i <= sideLength; i++)
	{
		current = current + prev;
		prev = current - prev;
	}
	return current;
}

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");
	int sideLength;
	input >> sideLength;
	output << NumberOfOptions(sideLength);
	return 0;
}