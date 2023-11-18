#include<iostream>
using namespace std;
int main()
{
	double r, h, v;
	cout << "圆锥半径为" << endl;
	cin >> r;
	cout << "圆锥锥高为" << endl;
	cin >> h;
	v = (1.0 / 3.0) * h * r * r * 3.14;
	cout << "圆锥体积为" << v << endl;
	return 0;
}