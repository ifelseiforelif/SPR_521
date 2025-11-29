#include <iostream>
using namespace std;


//Тема: Деструктор


class Student
{
private:
	char* name;
	unsigned short age;
public:
	Student(char* n, unsigned short a)
	{
		setName(n);
		age = a;
	}
	void setName(char* n)
	{
		if (name != nullptr)
			delete[] name;
		int size = strlen(n);
		if (n != nullptr && size != 0)
		{
			name = new char[size + 1];
			strcpy_s(name, size + 1, n);
		}
		else
		{
			name = nullptr;
		}

	}
	void showStudent()
	{
		cout << "Name: " << name << " Age: " << age << endl;
	}
	~Student()
	{
		if (name != nullptr)
			delete[] name;
	
	}
};


int main()
{
	char name[20];
	cin >> name;
	{
	Student st1{ name, 17 };
	st1.showStudent();
	cin >> name;
	st1.setName(name);
	st1.showStudent();
	}

	return 0;
}