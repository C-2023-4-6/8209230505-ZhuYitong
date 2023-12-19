//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"
using namespace std;
void Student::set_value() 
{
    cin >> num;
    cin >> name;
    cin >> sex ;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
int main()
{
    Student stud;                //定义对象
    stud.set_value();
    stud.display();              //执行stud对象的display函数
    return 0;
}