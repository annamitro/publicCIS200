#include "Vector.h"
#include <array>
#include <iostream>

using namespace std;

Vector::Vector()
{
	size = 0;
	entries = NULL; // was declared as int* entries
}
Vector::Vector(int s)
{
	// makes size = s,       
	size = s;
	//allocates s space.  entries is a dynamic array
	entries = new int[size]; 
	
	//make all entries 0
	for (int i = 0; i < size; i++)
	{
		entries[i] = 0;
	}
}
Vector::Vector(const Vector& rhs)   // copy constructor   // makes self a deep copy of rhs  //nothing to delete, just constructing object
{
	size = rhs.size;
	entries = new int[rhs.size];
	
	for (int i = 0; i < size; i++)
	{
		entries[i] = rhs.entries[i];
	}
}
Vector Vector::operator = (const Vector& rhs)   // makes self a deep copy of rhs  
{
	delete[] entries;
	this->size = rhs.size;
	entries = new int[rhs.size];

	for (int i = 0; i < size; i++)
	{
		entries[i] = rhs.entries[i];
	}

    return *this;
}
Vector::~Vector()     // default destructor  
{
	delete[] entries;
}
void Vector::print()      // Prints out the vector  
{
	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		cout << entries[i] << " ";
	}
	cout << "]" << endl;
}
void Vector::set(int val, int pos) // if 0 <=pos<size   // stores val at pos in entries  
{
	if (0 <= pos < size)
	{
		entries[pos] = val;
	}
}