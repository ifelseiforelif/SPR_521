#include <iostream>
using namespace std;

size_t mystrlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

void my_strcopy(char* destination, size_t size, const char* source)
{
	if (destination == nullptr)
	{
		return;
	}
	if (size == strlen(source) + 1)
	{
		int i = 0;
		while (source[i] != '\0')
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = '\0';
	}
}

int getCountOfLetters(const char* str)
{
	int counter = 0, i=0;
	if (str != nullptr)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
			{
				counter++;
			}
			i++;
		}
	}
	return counter;
}
const int N = 30;
void createStudent()
{
	char name[N], group[N];
	short age, height;
	cout << "Enter height: ";
	cin >> height;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Enter name: ";
	cin.getline(name, N - 1);
	cout << "Enter age: ";
	cin >> age; 
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Enter group: ";
	cin.getline(group, N - 1);
	cout << "Name: " << name << " Group: " << group << endl;
}

void change_str(char* str) {

	if (str == nullptr)
	{
		return;
	}
	for (int i = 0; i < strlen(str); i++) {

		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
}

void to_lower(char* str)
{
	if (!str) {
		return;
	}
	int diff = 'a' - 'A';
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + diff;
		}

	}
}

int main()
{

	// 
	// 
	//char str1[] = "heLlo 9"; //hello 9
	//char str2[] = "HelLo 9"; //hello 9
	//to_lower(str1);
	//to_lower(str2);
	//if (!strcmp(str1, str2))
	//{
	//	cout << "Equals";
	//}
	/*const int N = 5;
	char name[N];
	cin.getline(name, N);
	cout << name;*/
	//const int N = 5; //N*2
	//char str1[N * 2];
	//cin.getline(str1, N);
	//char str2[N];
	//cin.getline(str2, N);
	//cout << str1 << endl << str2<< endl;
	////конкатенація 
	//strcat_s(str1, strlen(str1) + strlen(str2) + 1, str2);
	//cout << str1;
	/*
	Написати функцію, яка приймає рядок і перетворює всі літери до літер нижнього
	реєстра
	HElLo54
	hello54
	*/
	//cout << strcmp("A", "a");  
	//string compare 
	// 0 - рядки рівні
	// 1 - перший ряд > другого ряда
	// -1 - перший ряд < другого ряда

	return 0;
}