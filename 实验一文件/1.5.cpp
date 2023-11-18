#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "请输入华氏度" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "对应摄氏度为" << fixed << setprecision(2) << C << endl;
	return 0;
}