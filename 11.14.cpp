/*************************************************************************
	> File Name: 11.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 21时10分09秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string, vector<pair<string, int>>> imap;
    string str;
    string name;
    int age;

    while (cin >> str >> name >> age) {
        imap[str].push_back(pair<string, int>(name, age));
    }
    for ( auto iter : imap ) {
        cout << iter.first << ": " << endl;;
        for (auto w : iter.second) {
            cout <<  w.first << "  " << w.second << endl;
        }
        cout << endl;
    }
    return 0;
}
