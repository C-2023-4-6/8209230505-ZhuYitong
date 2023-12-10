#include<iostream>
using namespace std;
int max(int a,int b) 
{
	int c;
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
		cout << "最大公因数为" ;
	}
	return a;
}
int min(int x,int y)
{
	int m;
   m = (x >= y) ? x : y;
   while ((m % x) != 0 || (m % y) != 0)
 {
	m = m + 1;
 }
cout << "最小公倍数" ;
return m;
}
int main() 
{
	int a, b;
	cin >> a >> b;
	int& one = a;
	int& two = b;
	cout << max(one, two) << endl;
	cout << min(one, two) << endl;
	return 0;
}