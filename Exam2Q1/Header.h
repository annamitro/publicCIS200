#pragma once

#include <iostream>

using namespace std;

class InAccurate
{
private:
	string message;
	double value;
public:
	InAccurate() {}
	InAccurate(string x, double y)
	{
		message = x;
		value = y;
	}
	void setMessage(string x)
	{
		message = x;
	}
	void setValue(double x)
	{
		value = x;
	}
	string getMessage() { return message; }
	double getValue() { return value; }
};