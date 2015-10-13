/*************************************************************************
	> File Name: 3_string_++.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月16日 星期三 19时40分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = (s1 + ", ") + "word";

    cout << "s1:" << s1 << "\ns2:" << s2 << endl;

    return 0;
}
