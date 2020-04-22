#include <iostream>
#include "Header.h"
#define MAXSIZE 100

using namespace std;

int main()
{
	double average(double x[], int xSize);
	InAccurate myError;
	double userInput = 0;
	double bpArray[MAXSIZE];
	int size = 0;
	for (int i = 0; i < MAXSIZE; i++)
	{
		cout << "Enter a BP value: ";
		cin >> userInput;
		if (userInput != -1)
		{
			bpArray[i] = userInput;
			size++;
		}
		else
		{
			break;
		}
	}
	try
	{
		double calcAverage;
		calcAverage = average(bpArray, size);
		if (calcAverage > 160)
		{
			throw InAccurate("Too high", calcAverage);
		}
		else if (calcAverage < 60)
		{
			throw InAccurate("Too low", calcAverage);
		}
	}
	catch (InAccurate myError)
	{
		cout << "Exception: " << myError.getMessage() << ", " << myError.getValue() << endl;
	}
	return 0;
}

double average(double x[], int xSize)
{
	double sum = 0.0;

	for (int i = 0; i < xSize; i++)
	{
		sum += x[i];
	}

	return (sum / xSize);
}
