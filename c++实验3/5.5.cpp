#include<iostream>
using namespace std;
class Point
{
private: 
	int x;
	int y;
public:
	Point(int newx, int newy)
	{
		x = newx;
		y = newy;
	};
	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	};
	void display()
	{
		cout << x << ' ' << y << endl;
	};
};

int main()
{
	int i, j;
	cin >> i >> j;
	Point a(60, 80);
	a.setpoint(i, j);
	a.display();
	return 0;
}