/*************************************************************************
	> File Name: 2_const.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月12日 星期六 13时01分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    cout << "r1 = " << r1 << ", r2 = " << r2 << endl;
    r1 = 0;
    cout << "r1 = " << r1 << ", r2 = " << r2 << endl;

    return 0;
}
