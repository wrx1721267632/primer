/*************************************************************************
	> File Name: 10.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月03日 星期二 14时07分48秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool choice_size(const string &s1)
{
    if (s1.size() >= 5) {
        return true;
    }
    return false;
}

int main()
{
    vector<string> vec{"abc","aaa","abcdef","abcde","abcccccc","asd"};
    auto end_size = partition(vec.begin(), vec.end(), choice_size);
    vec.erase(end_size, vec.end());
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    return 0;
}
