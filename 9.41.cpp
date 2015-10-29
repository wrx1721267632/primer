/*************************************************************************
	> File Name: 9.41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月27日 星期二 21时28分31秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<char> vec = {'a','b','c','d'};
    string str(vec.begin(), vec.end());

    cout << str << endl;
}
