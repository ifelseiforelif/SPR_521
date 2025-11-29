#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
#pragma region test
	//Інкремент(++) та декремент(--)
	/*
	операнд оператор x++ x-- постфіксна форма
	оператор операнд ++x --x префіксна форма
	*/
	/*int x = 100;
	cout << x++;
	cout << endl;
	cout << x;*/
	//int n = 10;
	//cout << n-- << ++n; // 11 
	// 10 11
	// 11 11 



	/*int n;
	cin >> n;
	char ch = n>0 ? '+' : n==0 ? '0' : '-';*/

#pragma endregion
	//enum switch
	/*int day = 1;
	if (day < 1)
		day--;
	switch (day)
	{
	case 1:
	{
		
	}
		

	case 2:
		cout << "Tuesday";

	case 3:
		cout << "Wednesday";
		break;
	default:
		cout << "error";
	}*/

	/*int x = 10;
	x += 2.4;*/

	//Перетворення типів
	//int a = 10;
	//double b =4.5;
	//float c = 4.5f;

	//cout << a+b+c; // 15, 15.5, 15.0
	//double, float, long, long long, int, (bool,char,short) 

	/*bool b1 = true;
	short c = 7;
	char r = 65;
	float f = 4.5f;
	cout << r+c+b1;*/


	//float a = 5.0123f;
	//cout << typeid(a).name() << endl;
	//cout << fixed << setprecision(2);
	//cout << "a = " << a;
	//Цикли
	
	/*int n; 
	cin >> n; 
	if (n < 0)
	{
		n = abs(n);
	}
	while (n <= 100 && n!=0)
	{
		cout << n << ' ';
		n *= 2;
	}
	const int N = 10;*/
	//цикл з постумовою
	//int n;
	//do
	//{
	//	//тіло
	//	cout << "Enter n: ";
	//	cin >> n;
	//	cout << pow(n, 3) << endl;
	//	
	//} while (n!=0);

	/*int n = 10;
	for (int i = 0; i < n; i++)
	{
		cout << i << " ";
	}*/
	/*int n = 10;
	int i=0;
	for (;i<n;)
	{
		cout << i << " ";
		i++;
	}*/

	//10 0 1
//for (int i = 50; i >= 0 ; i--)
//{
//	if (i % 2 == 0)
//		continue;
//	cout << i << ' '  << endl;
//}
//	int i = 50;
//	while (i >= 0)
//	{
//		i--;
//		if ((i+1) % 2 == 0)
//		{
//			
//			continue;
//		}
//		cout << i+1 << ' ';
//	
//	}

	int rows = 5;
	int cols = 5;
	
	//for (int i = 0; i < rows; i++) //i=0
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		if (i+j==rows-1)
	//		{
	//			cout << "0 ";
	//		}
	//		else
	//		{
	//			cout << "1 ";
	//		}
	//	}
	//	cout << endl;
	//}

	//Масиви статичні (константного розміру) arrays
	//const int N = 10;
	//int arr[N] = {5,6,7,8,9,0,3,5,7,9};

	//int arr2[] = { 4,5,7,8,9 };
	//int size = sizeof(arr2) / sizeof(arr2[0]);

	//int arr4[N]{}; //нулі
	//int arr3[N]; //сміття
	//for (int i = 0; i < N; i++) //заповнення
	//{
	//	//cin >> arr3[i];
	//	arr3[i] = pow(i, 2);
	//}
	//for (int i = 0; i < N; i++) //демонстрація
	//{
	//	cout  << arr3[i] << " ";
	//}

	const int SIZE = 5;
	int arr[SIZE]{};
	//cout << arr; //адрес початку масива
	/*arr[0] = 9.4;
	arr[1] = 7.6;
	arr[2] = 29;
	arr[3] = 6;
	arr[SIZE-1] = 19;*/
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		cout << arr[i] << endl;
	}



	return 0;
}


