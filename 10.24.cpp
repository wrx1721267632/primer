/*************************************************************************
	> File Name: 10.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月04日 星期三 22时36分28秒
 ************************************************************************/

#include<iostream>
#include<functional>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(string const &s1, size_t sz)
{
    return s1.size() <= sz;
}

/*vector<int>::iterator*/auto find_first_greater(vector<int> const& v, string const& str)
{
    auto predicate = [&](int i){return bind(check_size, str, i)();};
    return find_if(v.begin(), v.end(), predicate);
}

int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7};
    string str{"12345"};

    auto result = find_first_greater(vec, str);
    if(result != vec.cend())
        cout << *result << endl;
    else
        cout << "not find" << endl;
}
