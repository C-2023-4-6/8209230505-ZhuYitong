#include<iostream>
using namespace std;
double zzz(double a[10])
{
	for (int i = 0;i < 9;i++)
		for (int j = 0;j < 9;j++)
			if (a[j] > a[j + 1])
			{
				double t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for (int i = 0;i < 10;i++)
		cout << a[i] << '\t';
	return 0;
}
int main() 
{
	double a[10];
	for (int i = 0;i < 10;i++)
		cin >> a[i];
	zzz(a);
}