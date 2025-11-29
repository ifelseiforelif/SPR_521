#include "Point.h"
Point::Point() //default constructor
{
	x = 0;
	y = 0;
}
Point::Point(int x1, int y1)
{
	x = x1;
	y = y1;
}
int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}
void Point::setX(int x1)
{
	if (x1 > 0)
	{
		x = x1;
	}
}
void Point::setY(int y1)
{
	y = y1;
}
void Point::show()
{
	cout << x << " " << y << endl;
}