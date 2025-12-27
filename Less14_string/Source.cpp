//string
#include <iostream>
#include <string>
#include "Document.h"
using namespace std;

int main()
{
	Document doc1{"main", 340, "docx"};
	doc1.show();
	//basic_string<char> mes2;
	//string mes = "Hello"; //heap
	//cout << mes.size()<< endl; //розмір
	//mes += " World!!!!";
	//cout << mes.size() << endl; //розмір
	//cout << mes.capacity() << endl; //загальний розмір пам'яті
	//mes += "!";
	//cout << mes.capacity() << endl;
	//+ конкатенація, +=

	return 0;
}