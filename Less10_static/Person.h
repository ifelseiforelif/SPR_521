#pragma once
class Person
{
private:
	char* name; //покажчик на рядок
	unsigned short age;//екземплярне поле
	static int count; //статичне поле - належить класу
	void copy(char* n);
public:
	Person(char* n, unsigned short age);
	Person();
	Person(unsigned short a);
	Person(char* n);
	
	Person(const Person& obj);
	void setName(char* n);
	unsigned short getAge() const;
	static int getCount(); //належить класу
	~Person();
};

