#include <iostream>
using namespace std;

int main()
{
	/*
	* Заповнити динамічний 2D масив випадковими числами
	* Роздрукувати його
	* Змінити масив таким чином, щоб на головній діагоналі був
	лише той елемент масив, який є найбільшим серед усіх елементів
		
	*/
	typedef unsigned int uint;
	uint rows, cols;
	srand(time(0));
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of columns: ";
	cin >> cols;
	int** arr = new int* [rows];
	for (uint i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	//нагенерувати масив випадкових чисел
	for (uint i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
