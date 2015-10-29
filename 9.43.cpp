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
    int i=0, j=0;
    for (auto cur = s.begin(); cur <= s.end() - oldVal.size(); ) {
        if (oldVal == string{ cur, cur + oldVal.size() }) {
            if(i==j){
                cur = s.erase(cur, cur + oldVal.size());
                s.insert(cur, newVal.begin(), newVal.end());
                cur = s.begin();
                i++;
                j=0;
            } else {
                j++;
                ++cur;
            }
        }
        else  
            ++cur;
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

