#include <iostream>
using namespace std;
#include "Functions.h";
#include "Header.h";


// створіть шаблону функцію
// яка працює з масивом типа T
// і повертає суму першого та останього елемента масива
template <typename T1, typename T2>
T1 sum(T1 n1, T2 n2)
{
	return n1 + n2;
}

const int N = 3;

int get_sum_diag2(int arr[][N])
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i][N - 1 - i];
	}
	return sum;
}

int linear_search(int arr[], int size, int search)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == search) {
			return i;
		}
	}
	return -1;
}

int binary_search(int arr[], int size, int search)
{
	int left = 0, right = size - 1;
	int middleIndex;
	while (left <= right)
	{
		middleIndex = (left + right) / 2;
		if (arr[middleIndex] == search)
		{
			return middleIndex;
		}
		else if (arr[middleIndex] > search)
		{
			right = middleIndex - 1;
		}
		else
		{
			left = middleIndex + 1;
		}
	}
	return -1;
}

//Перевантаження функції
//int get_sum(int x, int y)
//{
//	return x + y;
//}
//
//int get_sum(int x, int y, int z)
//{
//	return x +y+ z;
//}

void increment()
{
	static int n = 0; //1 раз ініціалізується
	++n;
	cout << n << endl;
}

//int recursive(int n) // 2
//{
//	if (n <= 1)    
//		return n;
//	return pow(n, 2) + recursive(n - 1);
//}



void show_tree(int rows, int cols, char ch = '*')
{
	if (cols % 2 != 0)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (j >= cols / 2 - i && j <= cols / 2 + i)
					cout << ch;
				else
					cout << ' ';
			}
			cout << endl;
		}
	}
}

const int SIZE = 8;
bool chekDiagonal(int board[][8])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (board[i][i] == 2 || board[i][i]==1)
		{
			return true;

		}
	}
	return false;
}
int main() 
{
	int arr[SIZE][SIZE] = { {0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,1,0,0,0,0,0},
						{0,0,0,2,0,0,0,0},
						{0,0,0,0,1,0,0,0},
						{0,0,0,0,0,2,0,0},
						{0,0,0,0,0,0,1,0},
						{0,0,0,0,0,0,2,1} };
	if (chekDiagonal(arr))
	{
		cout << "true";
	}
	else
	{

	}
	char ch = 65;
	char ch2[6] = { 'H','E','L','L','O', '\0' }; //CTRL+K CTRL+D

	cout << ch2;


	/*cout << recursive(2) << endl;*/

	//increment(); //1
	//increment(); //2
	//increment(); //3

	/*get_sum(4, 5);
	get_sum(5, 6, 3);*/
	/*const int N = 10;
	int arr[N] = { 5,12,17,19,23,100,150,800,3000,9000 };
	int search;
	cin >> search;
	int index = binary_search(arr, N, search);
	(index == -1) ? cout << "Not found!\n" : cout << "Index: " << index;*/
}


