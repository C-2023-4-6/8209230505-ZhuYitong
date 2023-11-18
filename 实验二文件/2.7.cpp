#include<iostream>
using namespace std;
int main()
{
	for (int i = 1;i <= 5;i++)
	{
		for (int t = 1;t <= i;t++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}