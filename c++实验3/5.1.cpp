#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void cinTime()
	{
		cin >> hour;      //�����趨��ʱ�� 
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
	Time t1;           //����t1ΪTime�����
	t1.cinTime();
	t1.coutTime();
	return 0;
}