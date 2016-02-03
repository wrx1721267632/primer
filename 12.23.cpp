/*************************************************************************
	> File Name: 12.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月03日 星期三 10时35分10秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    char *a = new char[100]();
    strcat(a, "hello ");
    strcat(a, "world!");
    cout << a << endl;
    delete [] a;
    
    string str1{"hello "}, str2{"world!"};
    cout << str1 + str2 << endl;
}
