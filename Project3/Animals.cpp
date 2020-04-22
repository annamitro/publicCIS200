#include <iostream>
#include "Animals.h"

using namespace std;

//////////////////////// ANIMAL CLASS ////////////////////////

Animal::Animal()
{
	setAge(0);
	setWeight(0.0);
}

Animal::Animal(Animal& x)
{
	setWeight(x.weight);
	setAge(x.getAge());
}

Animal::~Animal()
{
	setAge(0);
	setWeight(0.0);
}

void Animal::setAge(int x){	age = x;}
void Animal::setWeight(float x){weight = x;}
int Animal::getAge() { return age; }
float Animal::getWeight() { return weight; }

void Animal::sound()
{
	cout << "*generic animal sound*" << endl;
}

//////////////////////// REPTILE CLASS ////////////////////////

Reptile::Reptile() { canFly = true; }
Reptile::Reptile(bool x) { canFly = x; }
Reptile::Reptile(Reptile& x)
{
	canFly = x.canFly;
	setWeight(x.weight);
	setAge(x.getAge());
}

Reptile::~Reptile() { canFly = true; }
void Reptile::sound()
{
	cout << "*reptile generic sound*" << endl;
}
void Reptile::layEggs()
{
	cout << "lay eggs" << endl;
}

//////////////////////// MAMMAL CLASS ////////////////////////

Mammal::Mammal() { canSwim = true; }
Mammal::Mammal(bool x) { canSwim = x; }
Mammal::Mammal(Mammal& x)
{
	canSwim = x.canSwim;
	setWeight(x.weight);
	setAge(x.getAge());
}
Mammal::~Mammal() { canSwim = false; }
void Mammal::sound()
{
	cout << "*mammal generic sound*" << endl;
}
void Mammal::giveBirth()
{
	cout << "give birth" << endl;
}

//////////////////////// CATTLE CLASS ////////////////////////

Cattle::Cattle() { type = "beef"; }
Cattle::Cattle(string x) { type = x; }
Cattle::Cattle(Cattle& x) 
{ 
	setType(x.type);
	setWeight(x.weight);
	setAge(x.getAge());
}
Cattle::~Cattle() { type = "beef"; }
void Cattle::sound()
{
	cout << "*moo*" << endl;
}
void Cattle::setType(string x)
{
	type = x;
}
void Cattle::displayType()
{
	cout << type << endl;
}

//////////////////////// CAT CLASS ////////////////////////

Cat::Cat() { type = "domestic"; }
Cat::Cat(string x) { type = x;}
Cat::Cat(Cat& x) 
{ 
	setType(x.type);
	setWeight(x.weight);
	setAge(x.getAge());
}

Cat::~Cat() { type = "domestic"; }

void Cat::sound()
{
	cout << "*meow*" << endl;
}

void Cat::setType(string x)
{
	type = x;
}

void Cat::displayType()
{
	cout << type << endl;
}