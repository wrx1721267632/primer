/*************************************************************************
	> File Name: 10.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月04日 星期三 17时10分55秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> vec{"aaa","aaaaaaaa","aaaaa","aaaaaa","aa","aaa","aaaa","aaaaaaa"};
    int i;
    cout << "input a number: ";
    cin >> i;
    auto end_count = count_if(vec.begin(), vec.end(), [i](string const &s1) {return s1.size() > i;});
    sort(vec.begin(), vec.end(), [](string const& s1, string const& s2) { return s1.size() > s2.size(); });
    vec.erase(vec.begin()+end_count, vec.end());
    cout << "longer than " << i << " number have " << end_count << " is: ";
    for (auto iter : vec) {
        cout << iter << "   ";
    }
    cout << endl;
}
