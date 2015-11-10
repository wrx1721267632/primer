/*************************************************************************
	> File Name: 10.30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 15时59分55秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    istream_iterator<int> item_iter(cin), eof;
    while (item_iter != eof) {
        vec.push_back(*item_iter++);
    }
    sort(vec.begin(), vec.end());
    auto uniq = unique_copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;
    return 0;
}
