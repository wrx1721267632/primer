/*************************************************************************
	> File Name: 11.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 19时41分32秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string, vector<string>> imap;
    string str;
    string name;

    cin >> str;
    cin >> name;
    imap[str].push_back(name);
    cin >> name;
    imap[str].push_back(name);
    cin >> str;
    cin >> name;
    imap[str].push_back(name);
    cin >> name;
    imap[str].push_back(name);
    for ( auto iter : imap ) {
        cout << iter.first << ": ";
        for (auto w : iter.second) {
            cout << w << "  ";
        }
        cout << endl;
    }
    return 0;
}
