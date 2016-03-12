/*************************************************************************
	> File Name: 16.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月11日 星期五 17时00分06秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

template<typename T>
T compare(const T &lhs, const T &rhs)
{
    return (lhs > rhs) ? lhs : rhs;
}

int main()
{
    cout << compare(1,0) << endl;
    vector<int> a{1,3,5}, b{2,4,6},max;
    max = compare(a,b);

    for (auto item : max) 
    {
        cout << item << "  ";
    }
    cout << endl;

    return 0;
}
