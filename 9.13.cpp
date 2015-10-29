/*************************************************************************
	> File Name: 9.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月22日 星期四 21时53分12秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> ist(5,4);
    vector<double> vec(ist.begin(), ist.end());

    for (auto i:ist) {
        cout << i << "  ";
    }
    cout << endl;
    for (auto i:vec) {
        cout << i << "  ";
    }
    cout << endl;

    list<int> ist2(vec.begin(), vec.end());
    for (auto i:ist2) {
        cout << i << "  ";
    }
    cout << endl;
}
