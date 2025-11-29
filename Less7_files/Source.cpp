#include <iostream>
#include <string>
using namespace std;
//Файлова система
//Текстові, бінарні
struct Point
{
	int x;
	int y;
};

void showPoint(Point& p)
{
	cout << "x: " << p.x << " y:" << p.y << endl;
}

Point& createPoint()
{
	Point p;
	cout << "Enter x: ";
	cin >> p.x;
	cout << "Enter y: ";
	cin >> p.y;
	return p;
}
int main()
{
	FILE* file;
	if(fopen_s(&file, "file.bin", "ab+") == 0) //SUCCESS
	{
		//TODO: визначити розмір файла / sizeof(Point)
		fseek(file, 0, SEEK_END); //каретка в кінець файла
		long fileSize = ftell(file); //поточна позиція каретки
		unsigned int total_size = fileSize / sizeof(Point);
		unsigned int size;
		cout << "Enter size: ";
		cin >> size;
		Point* points = new Point[size];
		for (unsigned int i = 0; i < size; i++)
		{
			points[i] = createPoint();
		}
		fwrite(points, sizeof(Point), size, file);
		fseek(file, 0, SEEK_SET);
		total_size += size;
		Point* temps = new Point[total_size];
		fread(temps, sizeof(Point), total_size, file);
		
		for(int i=0; i < total_size; i++)
		{
			showPoint(temps[i]);
		}
		delete[] points;
		delete[] temps;
		fclose(file);
	}
	else
	{
		cout << "Error opening file" << endl;
	}
	//створіть текстовий файл з двома числами 10  20
	//прочитайте числа і виведіть у консоль

	//FILE* file;
	//const char* filename = "file.txt";
	//errno_t code = fopen_s(&file, filename, "r");
	//if (code == 0) //SUCCESS
	//{
	//	char ch;
	//	while ((ch = fgetc(file)) && !feof(file))
	//	{
	//		cout << ch;

	//	}
	//	/*char str[50];
	//	while (fgets(str, 50, file))
	//	{
	//		cout << str;
	//	}*/
	//	//fgetc, fgets, fscanf
	//	fclose(file);
	//}
	//else
	//{
	//	cout << "Error opening file: " << code << endl;
	//}

	//Запитайте у користувача у циклі символи
	// і записуйте їх у файл, поки користувач не введе символ 'q'
	//FILE* file;
	//const char* filename = "file.txt";
	//errno_t code = fopen_s(&file, filename, "a");
	//if (code == 0) //SUCCESS
	//{
	//	char str[20];
	//	//fputs - рядки, fputc - символи, fprintf
	//	//fprintf(file, "%d\n%.2f\n%s", 100,3.14, "Hello");
	//	for (int i = 0; i < 3; i++)
	//	{
	//		cin.getline(str, 20);
	//		fputs(str, file);
	//		fputs("\n", file);
	//		fputc('A', file);
	//	}
	//	
	//	fclose(file);
	//}
	//else
	//{
	//	cout << "Error opening file: " << code << endl;
	//}
	return 0;
}