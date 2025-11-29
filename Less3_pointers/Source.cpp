#include <iostream>
using namespace std;
#include "Functions.h";
//Посилання, константні покажчики, покажчики на константу

int main()
{
	int n=getSize();
	int* arr = new int[n];
	fillArray(arr, n);
	showArray(arr, n);
	int newSize = getCountNegElement(arr, n);
	if (newSize > 0)
	{
		int* arrNeg = new int[newSize];
		fillNeg(arr, n, arrNeg, newSize);
		showArray(arrNeg, newSize);
		delete[] arrNeg;
	}
	else
	{
		cout << "Not found\n";
	}
	delete[] arr;

}