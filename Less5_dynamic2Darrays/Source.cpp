#include <iostream>
using namespace std;
//ƒинам≥чн≥ двовим≥рн≥ масиви


void fillArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void showArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
void clearMemory(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i]; //видал€ютьс€ масиви з числами
	}
	delete[] arr; //видал€Їтьс€ масив покажчик≥в
}
int main()
{
	//int n = 10;
	//int* ptr = &n;
	////покажчик на покажик (4 або 8 байт)
	//int** ptrPtr = &ptr; 
	int rows, cols;
	cout << "Enter row: ";
	cin >> rows;
	cout << "Enter cols: ";
	cin >> cols;
	srand(time(0));
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	fillArray(arr, rows, cols);
	showArray(arr, rows, cols);
	clearMemory(arr, rows);
	return 0;
}