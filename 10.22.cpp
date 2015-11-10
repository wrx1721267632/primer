/*************************************************************************
	> File Name: 10.22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月04日 星期三 22时19分27秒
 ************************************************************************/

#include<iostream>
#include<functional>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size( const string& s1, string::size_type sz ) 
{
    return s1.size() <= sz;
}

int main()
{
    vector<string> vec{"sad","sadasdasdad","aaa","asdasdasdasd","saa","aaa"};
    sort(vec.begin(),vec.end());
    sort(vec.begin(), vec.end(), [](string const &s1, string const &s2){return s1.size()>s2.size();});
    auto wc = find_if(vec.begin(), vec.end(), bind(check_size, _1, 6));
    vec.erase(vec.begin(),wc);
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
}
