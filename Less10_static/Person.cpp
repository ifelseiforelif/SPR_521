#include <iostream>
using namespace std;
#include "Person.h"

void Person::copy(char* n)
{
	unsigned int size = strlen(n);
	name = new char[size + 1];
	strcpy_s(name, size + 1, n);
}

Person::Person(char* n,unsigned short age) :age{age}
{
	count++;
	copy(n);
	
}

Person::Person(const Person& obj) //КК
{
	count++;
	age = obj.age;
	copy(obj.name);

}

int Person::getCount()
{
	return count;
}

Person::~Person()
{
	delete[] name;
}


void Person::setName(char* n)
{
	delete[] name;
	copy(n);
}
int Person::count = 0;