/*************************************************************************
	> File Name: 3_2_for.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月17日 星期四 22时14分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string s("hellow , world!!!");
    decltype(s.size()) punct_cnt = 0;

    for (auto c : s)
        if(ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in " << s << endl;

    return 0;
}
