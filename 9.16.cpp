/*************************************************************************
	> File Name: 9.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月26日 星期一 16时21分47秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5};
    vector<int> b{1,2,3,4};
    list<int> c{1,2,3,4,5};

    cout << (vector<int>(c.begin(), c.end()) == a ? "true" : "false") << endl;
    cout << (vector<int>(c.begin(), c.end()) == b ? "true" : "false") << endl;

    return 0;
}
