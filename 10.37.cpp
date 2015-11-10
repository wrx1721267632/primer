/*************************************************************************
	> File Name: 10.37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 22时32分33秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};

    for (auto iter = vec.rbegin()+2; iter != vec.rbegin()+7; iter++) {
        cout << *iter << "  ";
    }
    cout << endl;
    return 0;
}
