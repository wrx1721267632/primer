/*************************************************************************
	> File Name: 11.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 13时31分25秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    multimap<string, string> authors;
    string str;
    string name;

    while (cin >> str >> name) {
        authors.insert({str, name});
    }

    for ( auto iter : authors ) {
        cout << iter.first << " " << iter.second << endl;
    }
    return 0;
}
