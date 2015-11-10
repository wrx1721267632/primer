/*************************************************************************
	> File Name: 10.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 13时28分21秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
    list<string> lis{"aa","bb","aa","cc","ff","dd"};
    
    lis.sort();
    for (auto iter : lis) {
        cout << iter << "  ";
    }
    cout << endl;
    lis.unique();
    for (auto iter : lis) {
        cout << iter << "  ";
    }
    cout << endl;

    return 0;
}
