/*************************************************************************
	> File Name: 10.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月06日 星期五 11时22分30秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> vec{"abc","aaa","bbb","ccc"};
    list<string> lis;

    unique_copy(vec.begin(), vec.end(), back_inserter(lis));
    for (auto iter : lis) 
        cout << iter << "  ";
    cout << endl;
    for (auto iter : vec)
        cout << iter << "  ";
    cout << endl;
}
