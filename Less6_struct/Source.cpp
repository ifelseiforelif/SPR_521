#include <iostream>
using namespace std;


struct Point //структура
{
	int x; // поля структури
	int y; 
};
void showPoint(const Point& p)
{
	cout << "Point(" << p.x << ", " << p.y << ")\n";
}
void fillPoint(Point& p)
{
	cout << "Enter x: ";
	cin >> p.x;
	cout << "Enter y: ";
	cin >> p.y;
}

const int N = 30;
struct Date
{
	unsigned short day;
	unsigned short month;
	unsigned short year;
};
struct User
{
	char name[N];
	unsigned short age;
	float weight;
	Date date;
};

void fillUser(User& user)
{
	cout << "Enter name: ";
	cin >> user.name;
	cout << "Enter age: ";
	cin >> user.age;
	cout << "Enter weight: ";
	cin >> user.weight;
	cout << "Enter date (day month year): ";
	cin >> user.date.day >> user.date.month >> user.date.year;
}

void printUser(const User& user)
{
	cout << "Name: " << user.name << "\n";
	cout << "Age: " << user.age << "\n";
	cout << "Weight: " << user.weight << "\n";
	cout << "Date: " << user.date.day << "/" 
		<< user.date.month 
		<< "/" << user.date.year << "\n";
}

void sortingByAgeAsc(User* user, unsigned int n)
{
	for(size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (user[j].age > user[j + 1].age)
			{
				User temp = user[j];
				user[j] = user[j + 1];
				user[j + 1] = temp;
			}
		}
	}
}
void sortingByNameAsc(User* user, unsigned int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(user[j].name, user[j + 1].name)==1)
			{
				swap(user[j], user[j + 1]);
			}
		
		}
	}
}
struct Test
{
	short n1;
	short n2;
	int n3;
	double n5;
};
int main()
{
	cout << sizeof(Test)<< endl; 
	return 0;
	//Завдання: створити масив User і написати функції для сортування
	unsigned int n;
	cin >> n;
	User* users = new User[n];
	for(size_t i = 0; i < n; i++)
	{
		fillUser(users[i]);
	}
	for (size_t i = 0; i < n; i++)
	{
		printUser(users[i]);
	}
	cout << "After sorting:\n";
	//sortingByAgeAsc(users, n);
	sortingByNameAsc(users, n);
	for (size_t i = 0; i < n; i++)
	{
		printUser(users[i]);
	}
	delete[] users;


	//unsigned int n;
	//cin >> n;
	//Point* points = new Point[n]; //динамічний масив об'єктів типу Point
	//for (size_t i = 0; i < n; i++)
	//{
	//	fillPoint(points[i]);
	//	showPoint(points[i]);
	//}
	//delete[] points;
	//(*p).x = 18;

	//int* a = new int(10);
	//10
	//Point p1{}, p2{}, p3{};

	//const unsigned int N = 3;
	//Point points[N] = { p1, p2, p3 }; //масив об'єктів типу Point
	//for (size_t i = 0; i < N; i++)
	//{
	//	fillPoint(points[i]);
	//	showPoint(points[i]);
	//}
	return 0;
}