#include <iostream>

using namespace std;

/*MIT student in Computer Science Department has been asked to write a function that accepts 
three (3) inputs: (a) a sorted array of positive integer numbers and (b) the size of the array 
and (c) a positive integer number.
The function is supposed to search in the array to find two (2) integers that sum up to the 
positive integer number given as an input.*/

int main()
{
	bool find(int array[], int size, int number);
	int myArray[4] = { 1, 2, 3, 4 };
	
	if (find(myArray, 4, 3))
	{
		cout << "Found pair." << endl;
	}

	return 0;
}

bool find(int array[], int size, int number)
{
	int currentNum = 0;
	int limitNum = (size - 1);

	while (currentNum < limitNum)
	{
		if (array[currentNum] + array[limitNum] == number)
		{
			return true;
		}
		else if (array[currentNum] + array[limitNum] < number)
		{
			currentNum++;
		}
		else
		{
			limitNum--;
		}
	}
	return false; // will only execute if true was never returned in the while loop
}