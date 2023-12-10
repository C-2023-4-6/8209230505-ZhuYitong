#include<iostream>
#include <cstring>
using namespace std;
void count(char s[], int counts[26]) 
{
	
	int len1 = strlen(s);
	for (int i = 0;i < len1;i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			counts[0]++;
		if (s[i] == 'b' || s[i] == 'B')
			counts[1]++;
		if (s[i] == 'c' || s[i] == 'C')
			counts[2]++;
		if (s[i] == 'd' || s[i] == 'D')
			counts[3]++;
		if (s[i] == 'e' || s[i] == 'E')
			counts[4]++;
		if (s[i] == 'f' || s[i] == 'F')
			counts[5]++;
		if (s[i] == 'g' || s[i] == 'G')
			counts[6]++;
		if (s[i] == 'h' || s[i] == 'H')
			counts[7]++;
		if (s[i] == 'i' || s[i] == 'I')
			counts[8]++;
		if (s[i] == 'j' || s[i] == 'J')
			counts[9]++;
		if (s[i] == 'k' || s[i] == 'K')
			counts[10]++;
		if (s[i] == 'l' || s[i] == 'K')
			counts[11]++;
		if (s[i] == 'm' || s[i] == 'K')
			counts[12]++;
		if (s[i] == 'n' || s[i] == 'K')
			counts[13]++;
		if (s[i] == 'o' || s[i] == 'K')
			counts[14]++;
		if (s[i] == 'p' || s[i] == 'K')
			counts[15]++;
		if (s[i] == 'q' || s[i] == 'K')
			counts[16]++;
		if (s[i] == 'r' || s[i] == 'K')
			counts[17]++;
		if (s[i] == 's' || s[i] == 'K')
			counts[18]++;
		if (s[i] == 't' || s[i] == 'K')
			counts[19]++;
		if (s[i] == 'u' || s[i] == 'K')
			counts[20]++;
		if (s[i] == 'v' || s[i] == 'K')
			counts[21]++;
		if (s[i] == 'w' || s[i] == 'K')
			counts[22]++;
		if (s[i] == 'x' || s[i] == 'K')
			counts[23]++;
		if (s[i] == 'y' || s[i] == 'K')
			counts[24]++;
		if (s[i] == 'z' || s[i] == 'K')
			counts[25]++;
	}
}
int main() 
{
	char s[999]; 
	int counts[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cin.getline(s,999);
	count(s,counts);
	for (int i = 0;i < 26;i++)
		if(counts[i]!=0)
		cout <<(char)(i+97)<<"£º" << counts[i] << endl;
}