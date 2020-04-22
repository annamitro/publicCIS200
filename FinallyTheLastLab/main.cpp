#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userString;
	stack<double> myStack;

	cout << "type in a postFix expression or \"stop\" to quit" << endl;
	double createNumber(stack<double>& someStack);

	cin >> userString;
	while (userString != "stop")
	{
		double number1;
		double number2;

		if (userString == "+")
		{
			number2 = createNumber(myStack);
			number1 = createNumber(myStack);
			double sum = 0;

			sum = number2 + number1;
			myStack.push(sum);

		}
		else if (userString == "*")
		{
			number2 = createNumber(myStack);
			number1 = createNumber(myStack);
			double product = 0;

			product = number2 * number1;
			myStack.push(product);
		}
		else if (userString == "-")
		{
			number2 = createNumber(myStack);
			number1 = createNumber(myStack);
			double difference = 0;

			difference = number1 - number2;
			myStack.push(difference);
		}
		else if (userString == "/")
		{
			number2 = createNumber(myStack);
			number1 = createNumber(myStack);
			double quotient = 0;

			quotient = number1 / number2;
			myStack.push(quotient);
		}
		else if (userString == "=")
		{

			cout << myStack.top() << endl << endl;
			myStack.pop();
		}
		else
		{
			// the string is a number
			myStack.push(stod(userString)); // converting string to integer. 
											// using stod() function from string lib
		}
		cin >> userString;
	}
	return 0;
}

double createNumber(stack<double>& someStack)
{
	double num = 0;

	num = someStack.top();
	someStack.pop();

	return num;
}
