/*************************************************************************
	> File Name: 9.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月26日 星期一 17时25分50秒
 ************************************************************************/

#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
    deque<string> de;
    
    for (string str; cin >> str; de.push_back(str));
    for (auto iter = de.begin(); iter != de.end(); iter++) {
        cout << *iter << endl;
    }
    return 0;
}
