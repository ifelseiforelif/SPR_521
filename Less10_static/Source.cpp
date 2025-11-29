//Статичні поля та методи
#include <iostream>
using namespace std;
#include "Person.h"
//Делегування конструкторів


int main()
{
	const unsigned int N = 40;
	char name[N];
	cin >> name;
	Person p{ name, 20 };
	Person p2 = p; //створення об'єкта і в нього коп. інший об'єкт
	Person p3 = p2;
	char new_name[N];
	cin >> new_name;
	p3.setName(new_name);

	return 0;
}
