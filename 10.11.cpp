/*************************************************************************
	> File Name: 10.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月03日 星期二 13时42分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    sort(vec.begin(), vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    auto end_unique = unique(vec.begin(), vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    vec.erase(end_unique, vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    sort(vec.begin(), vec.end(), isShorter);
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    return 0;
}
