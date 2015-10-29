/*************************************************************************
	> File Name: 9.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月28日 星期三 00时56分49秒
 ************************************************************************/

#include <iterator>
#include <iostream>
#include <string>
#include <cstddef>

using std::cout; 
using std::endl; 
using std::string;

string::iterator replace_with(string &s, string const& oldVal, string const& newVal)
{
    for (int pos=0; pos != s.size() - oldVal.size(); pos++) {
        if (oldVal == s.substr(pos, oldVal.size())) {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size()-1;
        }
    }
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replace_with(s, "tho", "though");
    cout << s << endl;
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}

