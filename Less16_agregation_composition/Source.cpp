#include <iostream>
using namespace std;
//Агрегація та композиція


//Людина-brain(композиція)  шапка
//Смартфон-процессор(композиція) стилус
//Квартира-стіни(композиція) меблі
class Brain
{
private:
	float weight;
public:
	Brain() :weight{10}
	{

	}
	Brain(float weight) :weight{ weight } {}
	void setWeight(float weight)
	{
		this->weight = weight;
	}
	float getWeight()
	{
		return weight;
	}
};
class Hat
{
private:
	string color;
public:
	Hat() :color{ "white"}
	{

	}
	Hat(string color) :color{color } {}
	string getColor()
	{
		return color;
	}

};

class Person
{
private:
	string name;
	unsigned short age;
	Hat* hat;
	Brain brain;
public:
	Person(string name,unsigned short age, Hat* hat, float weight) 
	{
		this->name = name;
		this->age = age;
		this->hat = hat;
		this->brain.setWeight(weight);
	}
	void print()
	{
		cout << "Name: " << name << " Age: " << age << " Hat: " << hat->getColor() << " Brain: " << brain.getWeight()  << endl;
	}
};
int main()
{
	//Агрегація
	Hat hat("red");

	{
		Person p1("Alex", 20, &hat, 20);
		p1.print();
	}
	hat.getColor();
	/*Person* p1 = new Person("Alex", 20, &hat, 20);
	p1->print();
	delete p1;
	p1 = new Person("Bob", 23, &hat, 30);
	p1->print();
	delete p1;*/

	return 0;
}