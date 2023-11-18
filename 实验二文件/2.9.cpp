#include<iostream>
using namespace std;
int main()
{
	int num = 2, day = 0, x = 0;
	double	average;
	double money;
	while (num <= 100)
	{
		day++;
		x += num;
		num = num * 2;
	}
	average = x * 0.8 / day;
	cout << average;
	return 0;
}