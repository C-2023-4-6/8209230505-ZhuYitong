#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1), len2 = strlen(s2);//��ȡ�����ַ����ĳ���
    int pos1 = 0, pos2 = 0; // ��¼�����ַ������ڱȶԵ�λ��
    for (int i = 0;i <= len2 - len1;i++) { // �����û�ȶԵ��ַ����� s1��Ҫ��, ��ôs1�϶�����s2����
        pos1 = 0; // s1�Ǵ�ͷ��ʼ�Ƚϵ�
        pos2 = i; // ǰiλ�Ѿ��ȽϹ��ˣ�����s2�Ǵӵ�iλ��ʼ�Ƚϵ�
        for (int j = 0;j < len1;j++) { // ��ʼ��s1ȥ��λ�ȶ�s2
            if (s1[pos1] == s2[pos2]) {
                pos1++;
                pos2++;
                if (pos1 == len1) { // ���s1�ȶԵ�λ�õ������ĳ���, ���˵���Ѿ���s2�з���s1��
                    return (pos2 - len1); // s2����Ѱ�ҵ�λ�� - s1�ĳ��� = s1��s2�е�λ��
                }
            }
            else {
                break;// �ܲ���,��һ��Ѱ���ֳ�����,��ͷ��ʼ
            }
        }
    }
    return -1;//����ڱȶ����ҵ���s1��s2��λ��,��ǰ����Ѿ�return��,ֻ��һֱû�ҵ��Ż�ִ�е�return -1;
}

int main() {
    int N=999;
    char s1[999], s2[999];
    cout << "Enter the first string: ";
    cin.getline(s1, N);
    cout << "Enter the second string:";
    cin.getline(s2, N);
    cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << indexOf(s1, s2);
    return 0;
}