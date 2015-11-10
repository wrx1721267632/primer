/*************************************************************************
	> File Name: 10.21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月04日 星期三 17时28分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "input a number: ";
    cin >> i;
    auto check_num = [&i]{ return i-- ? true : false; };
    while (check_num()) {
        cout << i << "  ";
    }
    cout << endl;
}
