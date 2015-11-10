/*************************************************************************
	> File Name: 10.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月03日 星期二 21时10分50秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define N 5

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    vector<string> vec{"aaaaaa", "ccc", "bbbbbb", "eeeeeee", "dd", "dddddddddd"};
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
    sort(vec.begin(), vec.end(), [](string const &s1, string const &s2){return s1.size()<s2.size();} );
    int sz = N;
    auto wc = find_if(vec.begin(), vec.end(), [sz](const string& s){return s.size() >= sz;});
    auto count = vec.end() - wc;
    cout << count << "  " << make_plural(count, "word", "s") << " of length " << sz << " or longer " << endl;
    for_each(wc, vec.end(), [](const string &c){cout << c << " ";} );
    cout << endl;
}
