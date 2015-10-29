/*************************************************************************
	> File Name: 9.45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月28日 星期三 20时39分50秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

string Name_add(string &s, string const &befor_name, string const &after_name)
{
    s.insert(s.begin(), befor_name.begin(), befor_name.end());
    //s.insert(s.end(), after_name.begin(), after_name.end());
    return s.append(after_name);
}

int main()
{
    string s{"wang"};

    /*Name_add(s,"Mr.", "Jr.");
    cout << s << endl;;*/

    cout << Name_add(s, "Mr.", "Jr.") << endl; 
    return 0;
}
