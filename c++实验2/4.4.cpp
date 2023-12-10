#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	int a = 0, b = 0;
	for (int i=0;i < size1 + size2;i++)
		if (list1[a] <= list2[b])
		{
			list3[i] = list1[a];
			a++;
			if (a == size1)
			{
				i++;
				for (;i< size1 + size2;i++)
				{
					list3[i] = list2[b];
					b++;
				}
			}
		}
		else
		{
			list3[i] = list2[b];
			b++;
			if (b == size2)
			{
				i++;
				for (;i < size1 + size2;i++)
				{
					list3[i] = list1[a];
					a++;
				}
			}
		}
	for (int i = 0;i < size1 + size2;i++)
		cout << list3[i] << '\t';
}
int main()
{
	int size1,size2;
	cout << "Enter list1" << endl;
	cin >> size1;
	int	list1[80];
	for (int i = 0;i < size1;i++)
		cin >> list1[i];
	cout << "Enter list2" << endl;
	cin >> size2;
	int list2[80];
	for (int i = 0;i < size2;i++)
			cin >> list2[i];
	int list3[80];
	merge(list1, size1, list2, size2, list3);
	return 0;
}