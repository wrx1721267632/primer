/*************************************************************************
	> File Name: 9.46.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月28日 星期三 20时45分06秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

void Name_add(string &s, string const &befor_name, string const &after_name)
{
    s.insert(0, befor_name);
    s.insert(s.size(), after_name);
}

int main()
{
    string s{"wang"};
    Name_add(s, "Mr.", "Jr.");
    cout << s << endl;
    return 0;
}
