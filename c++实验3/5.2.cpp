//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"
using namespace std;
void Student::set_value() 
{
    cin >> num;
    cin >> name;
    cin >> sex ;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
int main()
{
    Student stud;                //�������
    stud.set_value();
    stud.display();              //ִ��stud�����display����
    return 0;
}