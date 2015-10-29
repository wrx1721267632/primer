/*************************************************************************
	> File Name: 9.22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月26日 星期一 21时46分32秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void double_and_insert(vector<int> &iv, int some_val)
{
    auto mid = [&]{ return iv.begin() + iv.size()/2; };
    for (auto curr=iv.begin(); curr != mid(); curr++) {
        if(*curr == some_val) {
            ++(curr = iv.insert(curr, 2 * some_val));
        }
    }
}

int main()
{
    vector<int> iv{1,9,1,9,9,9,1,1};

    double_and_insert(iv, 1);

    for (auto iter : iv) {
        cout << iter << endl;
    }
}
