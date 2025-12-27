//string
#include <iostream>
#include <string>
#include "Document.h"
using namespace std;

int main()
{
	try
	{
		string test = "Hello";
		int index;
		cin >> index;
		if (index >= 0 && index < test.size())
		{
			cout << test[index];
		}
		cout << test.at(10)<< endl;
		test.insert(0, "aa");
		test.insert(test.size(), "bb");
		cout << test;
	}
	catch (exception& ex)
	{
		cout << ex.what();
	}
	

	/*test.erase(0,2);*/

	return 0;
	string name="";
	cout << "Enter name: ";
	getline(cin, name);
	if (name.empty())
	{
		cout << "string is empty\n";
	}
	else
	{
		cout << "Welcome " << name << endl;
	}
	string s1 = "Hello";
	string s2 = s1; //тут глибока копія
	s1[0] = 'B';
	cout << s2 << endl;
	string s3 = move(s2); //s2 буде empty
	cout << s3 << endl;
	cout << s2.length() << endl; //також розмір рядка
	s3.clear(); //очистка рядка
	cout << s3.length() << endl;
	s1.erase(3); //видалення 
	cout << s1 << endl;
	s1.insert(0, "a"); //вставка рядка
	cout << s1 << endl;
	/*string::iterator it = s1.begin();
	cout << *it;*/

	
	//Document doc1{"main", 340, "docx"};
	//doc1.show();
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