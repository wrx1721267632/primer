/*************************************************************************
	> File Name: 9.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月27日 星期二 20时33分49秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> lst = {0,1,2,3,4,5,6,7,8,9,};
    auto  iter = lst.begin();
    while (iter != lst.end()) {
        if (*iter % 2) {
            iter = lst.insert(iter, *iter);
            advance(iter, 2);
        } else {
            iter = lst.erase(iter);
        }
    }

    for (auto it : lst) {
        cout << it << "  ";
    }
    cout << endl;
}
