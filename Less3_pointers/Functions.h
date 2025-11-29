#pragma once
template<typename T>
void showArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void fillArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element[" << i << "]: ";
		cin >> arr[i];
	}
}

int getSize()
{
	int n;
	do
	{
		cout << "Enter n:";
		cin >> n;
		if (n <= 0)
		{
			cout << "Try again (your number <=0)!\n";
		}
	} while (n <= 0);
	return n;
}

int getCountNegElement(int* arr, int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			counter++;
		}
	}
	return counter;
}
void fillNeg(int* arr, int n, int* newArr, int newSize) // 5 7 8 2
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			newArr[k] = arr[i];
			k++;
		}
	}
}

