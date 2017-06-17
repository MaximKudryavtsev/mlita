// lastNumber.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


using namespace std;



char GetLastNumeralOfInputNumber(string number)
{
	int lastNumeralPos = number.size() - 1;
	return number[lastNumeralPos];
}


int GetLastNumeralPos(vector<int> &endsOfNumbers, int &power)
{
	int pos;
	if ((power % endsOfNumbers.size()) == 0)
	{
		pos = endsOfNumbers.size() - 1;
	}
	else
	{
		pos = (power % endsOfNumbers.size()) - 1;
	}
	return pos;
}


int GetLastNumeralOfResultNumber(char lastNumeralOfInputNumber, int power)
{
	vector<int> endsOf2EndedNumbers = { 2, 4, 6, 8 };
	vector<int> endsOf3EndedNumbers = { 3, 9, 7, 1 };
	vector<int> endsOf4EndedNumbers = { 4, 6 };
	vector<int> endsOf7EndedNumbers = { 7, 9, 3, 1 };
	vector<int> endsOf8EndedNumbers = { 8, 4, 2, 6 };
	vector<int> endsOf9EndedNumbers = { 9, 1 };
	int lastNumeralOfResultNumber;
	int lastNumeralPos;
	switch (lastNumeralOfInputNumber)
	{
		case '0':
			lastNumeralOfResultNumber = 0;
			break;
		case '1':
			lastNumeralOfResultNumber = 1;
			break;
		case '2':
			lastNumeralPos = GetLastNumeralPos(endsOf2EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf2EndedNumbers[lastNumeralPos];
			break;
		case '3':
			lastNumeralPos = GetLastNumeralPos(endsOf3EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf3EndedNumbers[lastNumeralPos];
			break;
		case '4':
			lastNumeralPos = GetLastNumeralPos(endsOf3EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf4EndedNumbers[lastNumeralPos];
			break;
		case '5':
			lastNumeralOfResultNumber = 5;
			break;
		case '6':
			lastNumeralOfResultNumber = 6;
			break;
		case '7':
			lastNumeralPos = GetLastNumeralPos(endsOf7EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf7EndedNumbers[lastNumeralPos];
			break;
		case '8':
			lastNumeralPos = GetLastNumeralPos(endsOf8EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf8EndedNumbers[lastNumeralPos];
			break;
		case '9':
			lastNumeralPos = GetLastNumeralPos(endsOf9EndedNumbers, power);
			lastNumeralOfResultNumber = endsOf9EndedNumbers[lastNumeralPos];
			break;
	}
	return lastNumeralOfResultNumber;
}


int main(int argc, char* argv[])
{
	string number;
	int power;
	ifstream input("in.txt");
	ofstream output("out.txt");
	input >> number >> power;
	char x = GetLastNumeralOfInputNumber(number);
	output << GetLastNumeralOfResultNumber(x, power);
}
