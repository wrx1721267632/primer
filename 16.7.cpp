/*************************************************************************
	> File Name: 16.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月11日 星期五 20时14分11秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

template <typename T, unsigned size>
constexpr unsigned get_size(T (&arr)[size])
{
    return size;
}

int main()
{
    string a[] = {"sss", "aaa", "bbb"};
    char b[] = {'1', '2', '3'};

    cout << "a size: " << get_size(a) << endl;
    cout << "b.size: " << get_size(b) << endl;

    return 0;
}
