/*************************************************************************
	> File Name: 10.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月03日 星期二 20时54分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int a=10, b=21;
    auto c = [](int a, int b){ return a+b; };
    cout << c(a, b) <<endl;
    auto d = [a](int c) {return a+c;};
    cout << d(a) << endl;
    return 0;
}
