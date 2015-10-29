/*************************************************************************
	> File Name: 9.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月27日 星期二 19时35分51秒
 ************************************************************************/

#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> data = {0,1,2,3,4,5,6,7,8,9};
    auto iter = data.before_begin();
    auto it = data.begin();

    while (it != data.end()) {
        if (*it % 2 == 1) {
            it = data.erase_after(iter);
        } else {
            iter = it;
            it++;
        }
    }

    for (auto it : data) {
        cout << it << "  ";
    }
    cout << endl;
}
