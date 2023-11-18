#include<iostream>
using namespace std;
int main()
{
    int letter = 0, num = 0, space = 0, others = 0;
    char c;
    cout << "请输入一串字符" << endl;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c >= '0' && c <= '9')
            num++;
        else if (c == ' ')
            space++;
        else
            others++;
    }
    cout << "英文字母数量：" << letter << endl;
    cout << "空格数量：" << space << endl;
    cout << "数字字符数量：" << num << endl;
    cout << "其他字符数量：" << others << endl;

    return 0;
}