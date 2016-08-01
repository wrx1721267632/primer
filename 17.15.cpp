/*************************************************************************
	> File Name: 17.15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月27日 星期一 12时19分35秒
 ************************************************************************/

#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
    string s;
    regex r("[[:alpha:]]*aaa[[:alpha:]]*",regex::icase);
    cout << "please input a word! 'q' to quit:" << endl;
    while (cin >> s && s != "q")
    {
        if (std::regex_match(s,r))
        {
            cout << "input word " << s << " is ok" << endl; 
        }
        else 
        {
            cout << "input word " << s << " is not ok" << endl;
        }
        cout << "please input a word! 'q' to quit:" << endl;
    }
    return 0;
}
