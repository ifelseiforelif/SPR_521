#include <iostream>
using namespace std;
const unsigned int N = 3;

template <typename T>
class Store
{
private:
    T arr[N];
public:
    Store()
    {
    }
    Store(T arr[])
    {
        for (int i = 0; i < N; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    void print()
    {
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << ' ';
        }
    }
};

template <typename T>
class Point
{
private:
    T x;
    T y;
public:
    Point() {}
    Point(T x, T y)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "Point: " << x << " " << y << endl;
        //printf("Point: {%d} {%d}", x, y);
    }
    T getX() const
    {
        return x;
    }
    T getY() const
    {
        return y;
    }
};

template <typename T>
ostream& operator<<(ostream& out, const Point<T>& p)
{
    out << p.getX() << " " << p.getY() << endl;
    return out;
}


//STL - Standart Template Library

int main()
{
    int arr[N] = { 3,4,5 };
    Store<int> store{ arr };
    store.print();
    cout << endl;
    Point<int> points[N] = { {4,5}, {6,5}, {0,2} };
    Store<Point<int>> storePoints = { points };
    storePoints.print();
}
//Додайте в класс Store метод який рахує суму елементів масива
//І перевірте в main його роботу для int і для Point
//struct Point
//{
//    int x;
//    int y;
//    Point operator+(Point obj)
//    {
//        Point p = { this->x + obj.x, this->y + obj.y };
//        return p;
//    }
//};
//
//ostream& operator<<(ostream& out, const Point& p)
//{
//    out << p.x << " " << p.y << endl;
//    return out;
//}
//
//template <typename T>
//Point operator+(T value, const Point& p)
//{
//    decltype(value) v = value;
//    Point p1 = { p.x + v, p.y + v };
//    return p1;
//}


//template <typename T1, typename T2>
//auto sum(T1 a, T2 b) -> decltype(a + b) {
//    return a + b;
//}


//template <typename T1, typename T2>
//auto sum(T1 a, T2 b) {
//    return a + b;
//}

   /* Point<int> p1{5, 6};
    Point<double> p2{ 3.4, 9.8 };
    Point<float> p3{ 4.3f, 1.8f };
    p1.show();
    p2.show();
    p3.show();*/


  /*  Point p1{ 1,2 }, p2{ 6,3 };
    cout << 2 + p1;
    cout << p1 + p1;*/
   /* 10 + p1;
    10.4 + p1;*/
   /* cout << sum(4, 5) << endl;
    cout << sum(true, true) << endl;*/
    //cout << sum<Point, int>(p1, 4) << endl;
    //cout << sum(true, true) << endl;
    //cout << sum(p1, p2) << endl;
    //cout << sum(p1, 10) << endl;
    //cout << sum(4.5, 10) << endl;
    //cout << sum<Point, int>(p1, 4) << endl;
    //Зробити шаблон який дозволить робити такі операції  sum(4,8.7)  sum(Point, int)


