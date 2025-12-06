#include <iostream>
using namespace std;

#pragma region Point
class Point
{
private:
	int x;
	int y;
public:
	Point() :x{ 0 }, y{ 0 } {}
	Point(int x, int y) : x{ x }, y{ y } {}
	void print() const { cout << x << " " << y << endl; }
	Point& operator*(int n)
	{
		this->x = this->x * n;
		this->y = this->y * n;
		return *this;
	}
	Point operator+(const Point& obj)
	{
		Point p{ this->x + obj.x, this->y + obj.y };
		return p;
	}
	Point operator+(int n)
	{
		Point p{ this->x + n, this->y + n };
		return p;
	}
	friend Point operator+(int n, const Point& obj);
	Point& operator-()
	{
		this->x *= -1;
		this->y *= -1;
		return *this;
	}
	//friend void operator-(Point& p);
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}

	Point& operator++(int) //Postfix
	{
		Point p{ this->x, this->y };
		this->x++;
		this->y++;
		return p;
	}
	Point& operator++() //Prefix
	{
		this->x++;
		this->y++;
		return *this;
	}

};

Point operator+(int n, const Point& obj)
{
	Point p{ obj.x + n, obj.y + n };
	return p;
}
//void operator-(Point& p)
//{
//	p.x *= -1;
//	p.y *= -1;
//}
ostream& operator<<(ostream& out, const Point& p)
{
	out << p.getX() << " " << p.getY() << endl;
	return out;
}
istream& operator>>(istream& in, Point& p)
{
	int x, y;
	in >> x;
	in >> y;
	p.setX(x);
	p.setY(y);
	return in;
}
#pragma endregion

//void create(MyArray arr) 
//{
//	arr.print();
//}
//MyArray createObj(int n)
//{
//	MyArray ma{static_cast<unsigned int>(n)};
//	return ma;
//}
class MyArray
{
private:
	int* arr;
	/*mutable*/ unsigned int size;
public:
	MyArray()
	{
		arr = nullptr;
		size = 0;
	}
	MyArray(unsigned int size, int* arr)
	{
		this->size = size;
		this->arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	explicit MyArray(unsigned int size)
	{
		this->size = size;
		arr = new int[size] {};
	}
	MyArray(const MyArray& obj)
	{
		this->size = obj.size;
		this->arr = new int[obj.size];
		for (int i = 0; i < obj.size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	void print() const
	{
		for (unsigned int i = 0; i < size; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	void setSize(unsigned int size)
	{
		if (size == 0)
		{
			delete[] arr;
			arr = nullptr;
			this->size = size;
			return;
		}
		int* new_arr = new int[size] {};
		int n = (size >= this->size) ? this->size : size;
		for (int i = 0; i < n; i++)
		{
			new_arr[i] = arr[i];
		}
		delete[] arr;
		this->size = size;
		arr = new_arr;
	}
	unsigned int getSize() const
	{
		return this->size;
	}
	~MyArray() 
	{
		if (arr != nullptr)
			delete[] arr;
	}

	int operator[](int index)
	{
		if (index<0 || index >size - 1)
		{
			throw "out of range";
		}	
		return arr[index];
	}

	MyArray& operator=(const MyArray& obj)
	{
		if (this==&obj)
		{
			return *this;
		}
		if (obj.size == 0 || obj.arr == nullptr)
		{
			delete[] this->arr;
			this->arr = nullptr;
			this->size = 0;
			return *this;
		}
		if (this->arr != nullptr)
		{
			delete[] this->arr;
			this->arr = nullptr;
			this->size = 0;
		}
		this->arr = new int[obj.size];
		for (int i = 0; i < obj.size; ++i)
		{
			this->arr[i] = obj.arr[i];
		}
		this->size = obj.size;
		return *this;
	}
};





int main()
{
	MyArray obj1{ 10 };
	MyArray obj2{ 3 };
	//obj1 = obj2; //поверхневе копіювання
	obj1.print();
	obj1 = obj2;
	obj1.print();
	//obj1.operator=(obj2);

	//MyArray obj2 = obj1; //KK




	//Point p{ 2,4 };
	//cout << p++;  // 2,4
	//cout << p;
	//cout << ++p;
	//cout << p; //3,5
	//cout << ++p;

	//Point p10;
	//cin >> p10;
	//cout << p10;


	//Point p1{ 4,-5 };
	//Point p2{ 3,1 };
	//Point p3 = p1 + p2; //p1.operator+(Point p)
	//Point p4 = p1 + 2;
	//Point p5 = 6 + p1; //int.operator+(Point )
	

	//7*p1  //  int.operator* - ФУНКЦІЯ
	//p1*7  // Point.operator* - МЕТОД

	/*-p1;
	p1.print();

	cout << p1;*/

	/*
	==  p1==p2 -> true/false
	p1/число  -> нова точка
	
	*/


	//p1=p1*3; 
	//p1.print();
	//Point * int
	//p1.operator*(2)





	/*createObj(2).print();*/
	//MyArray arr1;
	//create(arr1);
	/*unsigned int n = 2;*/
	/*MyArray marr{ 3 };
	create(marr);*/









	/*const unsigned int N = 5;
	int arr[N] = { 6,3,4,6,2 };
	MyArray arr1{ N, arr };
	try
	{
		cout << arr1[10];
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	*/












	//arr1.print();
	//arr1.setSize(0); // РЕАЛІЗУЙТЕ цей метод ПРАВИЛЬНО без витіку пам'яті
	//arr1.print();
	//arr1.setSize(10);
	//arr1.print();
	//MyArray arr2 = arr1;
	//arr2.print();
}