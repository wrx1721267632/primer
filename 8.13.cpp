/*************************************************************************
	> File Name: 8.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 20时46分05秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

bool vaild(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main()
{
    ifstream ifs("phones");
    if (!ifs) {
        cout << "no data" << endl;
        return -1;
    }

     string line,word;
    vector<PersonInfo> people;
    while (getline(ifs, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (const auto &entry:people) {
        ostringstream formatted, badNums;
        for (const auto &nums:entry.phones) {
            if (!vaild(nums)) {
                badNums << " " << nums;
            } else {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty()) {
            cout << entry.name << " " << formatted.str() << endl;
        } else {
            cerr << "input error: " << entry.name << "\ninvalid number(s): " << badNums.str() << endl;
        }
    }
    return 0;
}
