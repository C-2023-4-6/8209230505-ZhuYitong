#include<iostream>
using namespace std;
int main()
{
	char a;
	int b;
	cin >> a;
	if (isupper(a))
		cout << (int)a + 1 << endl;
	else
		b = (int)a - 32;
	cout << (char)b << endl;
	return 0;
}