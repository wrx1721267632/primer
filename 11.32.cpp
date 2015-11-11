/*************************************************************************
	> File Name: 11.32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 16时49分14秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main()
{
    multimap<string, string> authors;
    string author;
    string work;
    map<string, multiset<string>> order_authors;

    while (cin >> author >> work) {
        authors.insert({author, work});
    }
    for (auto iter : authors) {
        order_authors[iter.first].insert(iter.second);
    }
    for (auto iter : order_authors) {
        cout << iter.first << ": ";
        for (auto it : iter.second) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
