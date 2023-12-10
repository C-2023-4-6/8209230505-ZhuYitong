#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1), len2 = strlen(s2);//获取两个字符串的长度
    int pos1 = 0, pos2 = 0; // 记录两个字符串正在比对的位置
    for (int i = 0;i <= len2 - len1;i++) { // 如果还没比对的字符串比 s1还要短, 那么s1肯定不在s2里了
        pos1 = 0; // s1是从头开始比较的
        pos2 = i; // 前i位已经比较过了，所以s2是从第i位开始比较的
        for (int j = 0;j < len1;j++) { // 开始用s1去逐位比对s2
            if (s1[pos1] == s2[pos2]) {
                pos1++;
                pos2++;
                if (pos1 == len1) { // 如果s1比对的位置等于它的长度, 这就说明已经在s2中发现s1了
                    return (pos2 - len1); // s2正在寻找的位置 - s1的长度 = s1在s2中的位置
                }
            }
            else {
                break;// 很不幸,这一轮寻找又出错了,从头开始
            }
        }
    }
    return -1;//如果在比对中找到了s1在s2的位置,在前面就已经return了,只有一直没找到才会执行到return -1;
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