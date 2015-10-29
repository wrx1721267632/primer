/*************************************************************************
	> File Name: 9.52.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 17时30分31秒
 ************************************************************************/

#include <stack>
#include <string>
#include <iostream>

using std::string; using std::cout; using std::endl; using std::stack;

int main()
{
    string str{"this is (true)"};
    bool bSeen = false;
    stack<char> stk;

    for (const auto &s : str) {
        if (s == '(') {
           bSeen = true; 
           continue;
        } else if (s == ')') {
            bSeen = false;
        }

        if (bSeen) {
            stk.push(s);
        }
    }

    string repstr;
    while (!stk.empty()) {
        repstr += stk.top();
        stk.pop();
    }

    str.replace(str.find("(") + 1, repstr.size(), repstr);

    cout << str << endl;
}
