#include <iostream> 
using namespace std;
	void main()
	{
		int num[10], i = 0, j;
		while (i < 10) cin >> num[i++];//依次输入10个数字
		for (i = 0;i < 10;i++)
		{
			for (j = 0;j < i;j++)if (num[i] == num[j])break;//对每个数字判断前面是否已有相同的数字，若有则退出循环
			if (j == i)cout << num[i]<< " " ;//在该数前面找不到相同的数字，则输出该数
		}
	}