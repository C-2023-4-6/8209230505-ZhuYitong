#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void cinTime()
	{
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}
	void coutTime() 
	{
        cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.cinTime();
	t1.coutTime();
	return 0;
}