
/*
»меетс€ заготовка из жести в виде круга. “ребуетс€ определить, можно ли из нее вырезать два

кольца заданных размеров.  ольцо представл€ет собой плоскую фигуру, ограниченную двум€

концентрическими окружност€ми.
*/

#include "stdafx.h"

using namespace std;

bool Compare(int firstInside, int firstOutside, int secondInside, int secondOutside, int radiusCircle)
{
	if ((firstInside < firstOutside) && (secondInside < secondOutside))
	{
		if (((firstInside > secondInside) && (firstInside >= secondOutside) &&
			(firstOutside >= secondInside) && (firstOutside > secondOutside) && (firstOutside <= radiusCircle)) ||
			((secondInside > firstInside) && (secondInside >= firstOutside) &&
			(secondOutside >= firstInside) && (secondOutside > firstOutside) && (secondOutside <= radiusCircle)) ||
			((firstOutside + secondOutside) <= radiusCircle)
			)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	fstream input("input.txt");
	ofstream output("output.txt");
	int amount;
	int firstInside;
	int firstOutside;
	int secondInside;
	int secondOutside;
	int radiusCircle;
	input >> amount;
	for (int i = 0; i < amount; i++)
	{
		input >> firstOutside >> firstInside >> secondOutside >> secondInside >> radiusCircle;
		if (Compare(firstInside, firstOutside, secondInside, secondOutside, radiusCircle))
		{
			output << "Yes" << endl;
		}
		else
		{
			output << "No" << endl;
		}
	}
}

