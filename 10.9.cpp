/*************************************************************************
	> File Name: 10.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月02日 星期一 15时45分27秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    for (auto iter = vec.begin(); iter < end_unique; iter ++) {
        cout << *iter << "  ";
    }
    cout << endl;
    vec.erase(end_unique, vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    return 0;
}
