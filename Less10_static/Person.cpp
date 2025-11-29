#include <iostream>
using namespace std;
#include "Person.h"

void Person::copy(char* n)
{
	if (n != nullptr)
	{
		unsigned int size = strlen(n);
		name = new char[size + 1];
		strcpy_s(name, size + 1, n);
	}
	else
	{
		name = nullptr;
	}
}

Person::Person(char* n,unsigned short age) :age{age>110?0:age}
{
	count++;
	copy(n);
	
}

Person::Person():Person(nullptr, 18)
{
}

Person::Person(unsigned short a):Person(nullptr, a)
{
}

Person::Person(char* n):Person(n,18)
{
}

Person::Person(const Person& obj) //КК
{
	count++;
	age = obj.getAge();
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
unsigned short Person::getAge() const
{
	return age;
}
int Person::count = 0;