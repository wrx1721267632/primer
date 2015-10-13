/*************************************************************************
	> File Name: 7.read.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月11日 星期日 15时59分04秒
 ************************************************************************/

#include<iostream>
using namespace std;

istream &read (istream &is)
{
    string a;
    is >> a;
    cout << "a: " << a << endl;

    return is;
}

int main()
{

    cout << read(cin) << endl;

    return 0;
}
