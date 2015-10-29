/*************************************************************************
	> File Name: 8.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 19时32分57秒
 ************************************************************************/

#include<iostream>
#include<sstream>
using namespace std;

istream& func(istream& iss)
{
    std::string str;
    while (iss >> str) {
        cout << str << endl;
    }
    cout << iss.rdstate() << endl;
    cout << iss << endl;
    iss.clear();
    return iss;
}

int main()
{
    std::istringstream iss ("hello hello");
    func(iss);
    cout << iss << endl;
    return 0;
}
