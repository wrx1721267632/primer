/*************************************************************************
	> File Name: 8.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 19时58分24秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line,word;
    vector<PersonInfo> people;
    istringstream record;

    while (getline(cin, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    
    cout << endl;
    for (auto &p:people) {
        cout << p.name << "  ";
        for (auto &s:p.phones) {
            cout << s << "  ";
        }
        cout << endl;
    }
}
