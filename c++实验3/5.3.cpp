#include<iostream>
using namespace std;
class column 
{
public:
	int h;
	int a;
	int b;
public:
	void V() 
	{
		int v;
		v = h * a * b;
		cout <<"Ìå»ıÎª"<< v << endl;
	}
	void cinnum() 
	{
		cin >> h >> a >> b;
	}
};
int main() 
{
	column v1;
	column v2;
	column v3;
	v1.cinnum();
	v2.cinnum();
	v3.cinnum();
	v1.V();
	v2.V();
	v3.V();
	return 0;
}