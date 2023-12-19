#include<iostream>
using namespace std;
class Student 
{
public:
	int no;
	int score;
	Student(int a, int b)
	{
		no = a;
		score = b;
	}
};
void max(Student* sp)
{
	int ma=0;
	int o = 0;
		for (int n = 0;n < 5;n++)
		{
			if ((sp + n)->score > ma)
			{
				ma = (sp + n)->score;
				o = (sp + n)->no;
			}
		}
	cout << o;
}
int main() 
{
	Student* sp[5];
	Student classscore[5] = {
		Student(01,98),Student(02,92),Student(03,99),Student(04,87),Student(05,90)
	};
	for (int n = 0;n < 5;n++)
	{
		sp[n] = &classscore[n];
	}
	max(sp[0]);
	return 0;
}