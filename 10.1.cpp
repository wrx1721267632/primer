/*************************************************************************
	> File Name: 10.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 17时50分34秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
using namespace std;

int main()
{
    vector<int> vec{123,123,213,123,123,213,1231,23};
    int val;

    cout << "please input need find number: ";
    cin >> val;
    int i = count(vec.begin(), vec.end(), val);

    cout << "num: " << i << endl;

    list<string> lis{"aa", "aa", "bb", "aaa"};
    string str;

    cout << "please input need find: ";
    cin >> str;
    i = count(lis.begin(), lis.end(), str);
    
    cout << "num: " << i <<endl;
    return 0;
}
