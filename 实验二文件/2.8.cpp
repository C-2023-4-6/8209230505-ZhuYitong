#include<iostream>
using namespace std;
int main()
{
	int a, x, y;
	cout << "请输入a" << endl;
	cin >> a;
	x = a;
	if (a >= 0)
	{
		y = (x + a / x) / 2;
		while ((y - x) >= 0.00001 || (y - x) <= -0.00001)
		{
			x = y;
			y = (x + a / x) / 2;
		}
		cout << y << endl;
	}
	else
	{
		cout << "负数无平方根" << endl;
	}
	return 0;
}