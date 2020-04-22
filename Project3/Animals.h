#pragma once
#include <iostream>

using namespace std;

class Animal
{
protected:
	float weight; // The weight of the animal
private:
	int age; // The age of the animal 
public:
	Animal(); // default constructor sets age = 0,and weight = 0.0 
	Animal(Animal& x); // copy constructor takes one parameter of  class Animal 
	~Animal(); // destructor sets age = 0, and weight = 0.0 
	void setAge(int x); // Takes an integer parameter, returns nothing 
	void setWeight(float x); // Takes a float parameter, returns nothing
	int getAge(); // Takes no parameters, returns the animal age 
	float getWeight(); // Takes no parameters, returns the animal weight
	void sound(); // Takes no parameter, returns nothing, prints out “generic sound” on screen
};

class Reptile : public Animal
{
private:
	bool canFly;
public:
	Reptile(); // default constructor sets canFly to true
	Reptile(bool x); // sets canFly = x
	Reptile(Reptile& x); // copy constructor takes one parameter of  class Reptile
	~Reptile(); // destructor sets canFly to true
	void sound(); // prints "reptile generic sound"
	void layEggs(); // prints "lay eggs"
};

class Mammal : public Animal
{
private:
	bool canSwim;
public:
	Mammal(); // default constructor sets canFly to true
	Mammal(bool x); // sets canSwim = x
	Mammal(Mammal& x); // copy constructor takes one parameter of class Mammal 
	~Mammal(); // destructor sets canSwim to false
	void sound(); // prints "mammal generic sound"
	void giveBirth(); // prints "Give birth"
};

class Cattle : public Mammal
{
private:
	string type; // "beef" or "dairy"
public:
	Cattle(); // default constructor sets type to "beef"
	Cattle(string x); // sets type = x
	Cattle(Cattle& x); // copy constructor takes one parameter of class Cattle 
	~Cattle(); // destructor sets type to "beef"
	void sound(); // prints "moo"
	void setType(string x); // sets type = x
	void displayType(); // prints out type

};

class Cat : public Mammal
{
private:
	string type; // "domestic" or "wild"
public:
	Cat(); // default constructor sets type to domestic
	Cat(string x); // sets type = x
	Cat(Cat& x); // copy constructor takes one parameter of class Mammal 
	~Cat(); // destructor sets canSwim to false
	void sound(); // prints "meow"
	void setType(string x); // set type = x
	void displayType(); // prints out type
};