/*************************************************************************
	> File Name: 9.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月25日 星期日 22时23分32秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

int main()
{
    list<char*> a = {"baby ", "i ", "love ", "you", " "};
    vector <string> b;

    b.assign(a.begin(), a.end());
    for (auto &p: b) {
        cout << p ;
    }
    cout << endl;

    return 0;
}
