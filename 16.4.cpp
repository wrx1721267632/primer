/*************************************************************************
	> File Name: 16.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月11日 星期五 17时11分13秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

namespace ch16
{
    template <typename T, typename F>
    inline T find(T first, T last, F const& value)
    {
        auto curr = first;
        while (curr != last && *curr != value) 
        {
            ++curr;
        }
        return curr;
    }
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    auto find_vector = ch16::find(v.begin(), v.end(), 5);
    cout << *find_vector << endl;

    list<string> lst = {"a", "b", "c", "def", "ghi"};
    auto find_list =  ch16::find(lst.begin(), lst.end(), "def");
    cout << *find_list << endl;

    return 0;
}
