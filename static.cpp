/*************************************************************************
	> File Name: static.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月20日 星期二 17时04分03秒
 ************************************************************************/

#include<iostream>
using namespace std;

class student
{
    public:
        student(): name("null"),number(0) {}
        static int num;
        static int add_student(){ num++; return num; }
        void set_name();
        void set_number();
        void Print();
    private:
        char name[10];
        int  number;
};

void student::set_name()
{
    cout << "please input the name: ";
    cin >> name;
}

void student::set_number()
{
    cout << "please input your number: ";
    cin >> number;
}

void student::Print()
{
    cout << "name: " << name << "\nnumber: " << number << endl;
}

int student::num=0;

int main()
{
    student a;
    cout << student::num << endl;
    a.Print();
    a.set_name();
    a.set_number();
    student::add_student();
    cout << student::num << endl;
    a.Print();
    return 0;
}
