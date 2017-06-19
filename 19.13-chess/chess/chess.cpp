// chess.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
using namespace std;

int main()
{
	int width = 5;
	int height = 5;
	int posI = 1;
	int posJ = 4;
	int color = 1;
	ifstream input("input.txt");
	ofstream output("output.txt");
	input >> height >> width >> posI >> posJ >> color;
	if ((width % 2 == 0) || (height % 2 == 0))
	{
		output << "equal";
	}
	else if (((posJ % 2 == 0) && (posI % 2 == 0)) || ((posJ % 2 != 0) && (posI % 2 != 0)) && (color == 0))
	{

		output << "black" << endl;
	}
	else
	{
		output << "white" << endl;
	}
}

