/*************************************************************************
	> File Name: 10.7_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 22时24分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst{1,2,3,4,5,6,7,8,9,0};
    int i;

    copy(lst.cbegin(), lst.cend(), back_inserter(vec));
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    return 0;
}
