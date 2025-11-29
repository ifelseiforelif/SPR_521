#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(); //default constructor
	Point(int x1, int y1);
	int getX();
	int getY();
	void setX(int x1);
	void setY(int y1);
	void show();
};

