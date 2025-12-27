#include <iostream>
#include <stack>
#include <queue>

using namespace std;
struct Point
{
	int x;
	int y;
	void show()
	{
		cout << x << " " << y << endl;
	}
};

int main()
{
	stack<Point> my_point_stack;

	my_point_stack.push({5,6});
	my_point_stack.push({1,-3});
	my_point_stack.push({0,1});
	while (!my_point_stack.empty())
	{
		my_point_stack.top().show();
		my_point_stack.pop();
	}
	stack<int> my_stack;
	my_stack.push(12);
	my_stack.push(1);
	my_stack.push(-1);
	while (!my_stack.empty())
	{
		cout << my_stack.top() << ' ';
		my_stack.pop();
	}
	cout << "Size: " << my_stack.size() << endl;
	return 0;
}