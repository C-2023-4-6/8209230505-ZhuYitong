#include<iostream>
using namespace std;
bool is_prime(int num) 
{
	if (num < 2) 
	{
		return false;
	}
	else
	{
		for (int i = 2;i * i <= num;i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
}

int main() 
{
	int a=0;
	int n=0;
	for (;n<=199;a++)
		if (is_prime(a))
		{
			cout << a << '\t';
			n++;
			if (n % 10 == 0)
				cout << endl;
		}
	return 0;
}