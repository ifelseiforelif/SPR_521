#include <iostream>
using namespace std;
//Покажчики на функції
int sum(int a, int b)
{
	return a + b;
}
int mult(int a, int b)
{
	return a*b;
}
int sub(int a, int b)
{
	return a - b;
}
int divide(int a, int b)
{
	return (b != 0) ? a / b : 0;
}
int rest(int a, int b)
{
	return a % b;
}

void calc(int a, int b, int(*ptr)(int, int))
{
	cout << ptr(a, b) << endl;
}

int main()
{
	/*int arr[] = { 5,5,7 };
	int* ptr = arr;
	cout << *(arr+1);*/
	/*const int N = 5;
	int (*arrFunc[N])(int, int) = { sum, mult, divide, sub, rest };
	for (int i = 0; i < N; i++)
	{
		cout << arrFunc[i](5, 6) << endl;
	}*/
	/*cout << "Enter index operation (0" << N - 1 << "): ";
	int index;
	cin >> index;
	if (index >= 0 && index < N)
	{
		int a, b;
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << arrFunc[index](a, b) << endl;
	}
	*/
	/*int n = 10;
	int* ptr = &n;*/
	return 0;
}