/*************************************************************************
	> File Name: 11.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 13时19分17秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string, size_t> authors;
    string word;

    while (cin >> word) {
        auto ret = authors.insert({word, 1});
        if ( !ret.second ) 
            //++((*ret.first).second);
            ++ret.first->second;
    }

    for (auto iter : authors) {
        cout << iter.first << "  " << iter.second << endl;
    }
    return 0;
}
