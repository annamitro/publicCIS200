#include <iostream>

using namespace std;

class NotFound
{
private:
	double item;
public:
	NotFound(double item) { this->item = item; }
	double getItem() { return item; }
};

int main()
{
	int find(double arr[], int size, double target);

	int mySize = 0;
	double myTarget = 0.0;

	cout << "What size array?" << endl;
	cin >> mySize;
	
	double* myArray = new double[mySize];

	cout << "Enter elements one by one:" << endl;
	for (int i = 0; i < mySize; i++)
	{
		double userInput = 0.0;
		cin >> userInput;
		myArray[i] = userInput;
	}

	cout << "What is the target?" << endl;
	cin >> myTarget;
	try
	{
		find(myArray, mySize, myTarget);
	}
	catch (NotFound x)
	{
		cout << "Exception: Item " << x.getItem() << " not found." << endl;
		return -1; // terminates program & ensures that the cout below doesnt happen 
	}

	cout << "Index of target is " << find(myArray, mySize, myTarget) << endl;
	delete[] myArray;
	return 0;
}

int find(double arr[], int size, double target)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			return i;
		}
	}
	throw NotFound(target); // simple. this line will only execute if the fxn doesnt return an int 
}

