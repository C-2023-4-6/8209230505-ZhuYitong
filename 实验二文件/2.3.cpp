#include<iostream>
using namespace std;
int main()
{
	double a, b, c, C;
	cin >> a >> b >> c;
	C = a + b + c;
	cout << "三角形周长为" << C << endl;
	if (a == b)
		cout << "是等腰三角形" << endl;
	else
		if (a == c)
			cout << "是等腰三角形" << endl;
		else
			if (b == c)
				cout << "是等腰三角形" << endl;
			else
				cout << "不是等腰三角形" << endl;
	return 0;
}