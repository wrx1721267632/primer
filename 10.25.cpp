/*************************************************************************
	> File Name: 10.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月04日 星期三 22时53分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;

void elimdups(vector<string> &vs)
{
    sort(vs.begin(), vs.end());
    vs.erase(unique(vs.begin(), vs.end()), vs.end());
}

bool check_size(const string &s1, vector<string>::size_type sz)
{
    return s1.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimdups(words);
    auto iter = stable_partition(words.begin(), words.end(), bind(check_size, _1, sz));
    for_each(words.begin(), iter, [](const string &s1){cout << s1 << " ";});
}

int main()
{
    vector<string> vec{"the", "quick", "red","fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(vec, 4);
    cout << endl;
}
