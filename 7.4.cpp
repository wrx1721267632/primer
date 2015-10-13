/*************************************************************************
	> File Name: 7.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月09日 星期五 16时28分52秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class person
{
    friend void One();
    public:
        person()
        {
            name = "未知";
            address = "未知";
        }
        person(std::istream &is)
        {
            //read(is, *this);
        }
        string Name();
        string Address();
        void Print();
        void Set(string a, string b);
    private:
        string name;
        string address;
};

string person :: Name()
{
    return name;
}

string person :: Address()
{
    return address;
}

void person :: Print()
{
    cout << "Name: " << name << "\nAddress: " << address << endl;
}

void person :: Set(string a, string b)
{
    name = a;
    address = b;
}

void One()
{
    person a;
    a.name = "haha";
    a.address = "hehe";
    a.Print();
}

int main()
{
    person d;
    person c;
    person b;
    string Na1, Na2;
    string Ad1, Ad2;

    cout << "输入其姓名：" << endl;
    cin >> Na1;
    cout << "输入其地址：" << endl;
    cin >> Ad1;
    d.Set(Na1, Ad1);
    Na2 = d.Name();
    Ad2 = d.Address();
    d.Print();
    cout << "姓名：" << Na1 << "\n地址: " << Ad1 << endl;
    cout << "姓名：" << Na2 << "  ("<<sizeof(Na2) << ")" << "\n地址: " << Ad2 << "  ("<< sizeof(Ad2) << ")" << endl;
    //c = d;
    c.Print();
    //b.person();
    //b.Print();
    One();

    return 0;
}
