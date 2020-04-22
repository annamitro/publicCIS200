#include <iostream>

using namespace std;


int main()
{
	int* x = NULL;
	int n;

	cout << "Enter size of 1D array: " << endl;
	cin >> n;
	x = new int[n]; // new operator lets us assign memory as the program runs

	for (int index = 0; index < n; index++)
	{
		x[index] = 10;
	}

	for (int index = 0; index < n; index++)
	{
		cout << x[index] << " "; //just to show that the number of elements is correct
	}
	cout << endl;

////////////////////////////////////////////////////////////////

	int** y = NULL; //initialize to nothing
	int a = 0; 
	int b = 0;

	cout << "Enter number of rows, then number of columns of 2D array: " << endl;
	cin >> a >> b;

	y = new int*[a];

	for (int i = 0; i < a; i++)
	{
		y[i] = new int[b];
		
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			y[i][j] = 10;
			
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << y[i][j] << " ";//this is just to show that the number of elements is correct

		}
		cout << endl;
	}
	///DELETE

	delete [] x;

	for (int i = 0; i < a; i++)
	{
		delete [] y[i];
	}

	delete [] y;


	return 0;
}

//
//int main()
//{
//	void Switch(int* x, int* y);
//
//	int a = 5, b = 7;
//
//	int a = 5, b = 7; cout << "a = " << a << "   " << " b = " << b;
//
//	Switch(&a, &b);
//
//	cout << "a = " << a << "   " << " b = " << b;
//
//	return 0;
//}
//
