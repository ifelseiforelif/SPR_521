#include <iostream>
using namespace std;
//Посилання, константні покажчики, покажчики на константу

void show(const int* const arr, int n);

void pushBackArray(int*& arr, int n, int value) // 3 4 7 -> 3 4 7 20
{
	int new_size = n + 1;
	int* new_arr = new int[new_size];
	for (int i = 0; i < n; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[n] = value;
	delete[] arr;
	arr = new_arr;
}

void sumAndMultArr(const int* const arr, size_t n, 
	int& sum, int& mult)
{
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		mult *= arr[i];
	}
}

int main()
{
	int size = 3;
	int* arr = new int[size] {4, 8, 1};
	int s=0, m=1;
	sumAndMultArr(arr, size, s, m);
	cout << "Sum: " << s << endl;
	cout << "Mult: " << m << endl;
	delete[] arr;


	
	

	/*change(n);
	change(n);
	cout << n;*/


	/*int size = 3;
	int* arr = new int[size] {3, 4, 7};
	arr = pushBackArray(arr, size, 20);
	show(arr, size + 1);
	delete[] arr;*/

}


void show(const int* const arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}