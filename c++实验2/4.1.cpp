#include <iostream> 
using namespace std;
	void main()
	{
		int num[10], i = 0, j;
		while (i < 10) cin >> num[i++];//��������10������
		for (i = 0;i < 10;i++)
		{
			for (j = 0;j < i;j++)if (num[i] == num[j])break;//��ÿ�������ж�ǰ���Ƿ�������ͬ�����֣��������˳�ѭ��
			if (j == i)cout << num[i]<< " " ;//�ڸ���ǰ���Ҳ�����ͬ�����֣����������
		}
	}