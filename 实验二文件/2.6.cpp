#include<iostream>
using namespace std;
int main()
{
	int a, b, c, x, y, m;
	cin >> a >> b;
	x = a, y = b;
	//求最大公因数*****************************
	if (a >= b)
	{
		c = a % b;
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		cout << b;
	}
	else
	{
		c = b % a;
		while (c != 0)
		{
			b = a;
			a = c;
			c = b % a;
		}
		cout << "最大公因数为" << a << endl;
	}
	//求最大公因数****************************
	//求最小公倍数*****************************
	m = (x >= y) ? x : y;
	while ((m % x) != 0 || (m % y) != 0)
	{
		m = m + 1;
	}
	cout << "最小公倍数" << m << endl;
	//求最小公倍数*****************************
	return 0;
}