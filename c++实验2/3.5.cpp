#include<iostream>
using namespace std;
int main() 
{
	int n = 1;
	int m = 0;
	for (int d = 1;d <= 9;d++)
	{
		m = (n + 1) * 2;
		n = m;
	} 
	cout << m;
}