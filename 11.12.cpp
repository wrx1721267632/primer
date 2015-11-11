/*************************************************************************
	> File Name: 11.12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 21时02分01秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<utility>
using namespace std;

int main()
{
    vector<pair<string, int>> vec;
    pair<string, int> pai;
    while (cin >> pai.first) {
        pai.second = pai.first.size();
        vec.push_back(pai);
    }

    for (auto iter : vec) {
        cout << iter.first << "  " << iter.second << endl;
    }
    return 0;
}
