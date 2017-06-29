#include "stdafx.h"

using namespace std;

void ProcessChain(double quantityOfChain, double lengthOfChain, double quantityOfPieces, double resultQuantityOfChain, ofstream &output)
{
	double counter = 0;
	double quantityOfDevidedChain = quantityOfChain;
	double max = lengthOfChain;
	double min = lengthOfChain / quantityOfPieces;
	while (quantityOfDevidedChain < resultQuantityOfChain)
	{
		quantityOfDevidedChain += quantityOfPieces - 1;
		counter++;
		min = lengthOfChain / quantityOfPieces;
		if (quantityOfDevidedChain >= quantityOfChain * quantityOfPieces)
		{
			max = lengthOfChain / quantityOfPieces;
			quantityOfChain *= quantityOfPieces;
			lengthOfChain /= quantityOfPieces;
		}
	}
	if (quantityOfDevidedChain == resultQuantityOfChain)
	{
		output << "Yes" << endl;
		output << fixed << setprecision(8) << min << " " << setprecision(8) << max << endl;
	}
	else
	{
		output << "No";
	}
}

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");
	double quantityOfChain;
	double lengthOfChain;
	double quantityOfPieces;
	double resultQuantityOfChain;
	input >> quantityOfChain >> lengthOfChain >> quantityOfPieces >> resultQuantityOfChain;
	ProcessChain(quantityOfChain, lengthOfChain, quantityOfPieces, resultQuantityOfChain, output);
	
	
}
