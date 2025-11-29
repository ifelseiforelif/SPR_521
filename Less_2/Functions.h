#pragma once
//DRY

void fill_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value [" << i << "]: ";
		cin >> arr[i];
	}
}

template<typename T>
T get_max(T arr[], int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

template <class T>
void show_array(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}



int get_sum(int a, int b)
{
	return a + b;
}

void get_sum2(int a, int b)
{
	cout << a + b << endl;
}
