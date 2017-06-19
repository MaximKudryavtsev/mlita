// rings.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

bool Compare(int firstInside, int firstOutside, int secondInside, int secondOutside, int radiusCircle)
{
	if (((firstInside > secondInside) && (firstInside > secondOutside) && (firstInside < radiusCircle) &&
		(firstOutside > secondInside) && (firstOutside > secondOutside) && (firstOutside < radiusCircle))
		|| ((secondInside > firstInside) && (secondInside > firstOutside) && (secondInside < radiusCircle) &&
		(secondOutside > firstInside) && (secondOutside > firstOutside) && secondOutside < radiusCircle)
		)
	{
		return true;
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
		input >> firstInside >> firstOutside >> secondInside >> secondOutside >> radiusCircle;
		if (Compare(firstInside, firstOutside, secondInside, secondOutside, radiusCircle))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	
	
}

