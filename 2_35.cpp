/*************************************************************************
	> File Name: 2_35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月14日 星期一 22时08分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    return 0;
}
