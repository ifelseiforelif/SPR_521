//Статичні поля та методи
#include <iostream>
using namespace std;
#include "Person.h"
//Делегування конструкторів
//Покажчик this. Яку проблему вирішує this 

class Point
{
private:
	int x;
	int y;
public:
	Point() = default;
	
	Point(int x, int y) 
	{
		this;
		this->x = x;
		this->y = y;
		this->show();
	}
	void show()
	{
		this;
		Point p{ 0,8 };
		cout << "Address: " << this << endl;
		cout << "X: " << x << " Y: " << y << endl;
	}
};


int main()
{
	Point p{3,4};
	cout << &p << endl;
	p.show();

	return 0;
	//const unsigned int N = 40;
	//char name[N];
	//cin >> name;
	//Person p6;
	//Person p4{ name };
	//Person p5{ 12 };
	//Person p{ name, 20 };
	//Person p2 = p; //створення об'єкта і в нього коп. інший об'єкт
	//Person p3 = p2;
	//char new_name[N];
	//cin >> new_name;
	//p3.setName(new_name);

	//return 0;
}
