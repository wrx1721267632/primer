/*************************************************************************
	> File Name: 16.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月11日 星期五 19时33分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

template <typename T, unsigned size>
T* begin_def(T(&arr)[size])
{
    return arr;
}

template <typename T, unsigned size>
T* end_def(T (&arr)[size])
{
    return arr + size;
}

int main()
{
    string str[] = {"abcde", "ha", "ha", "efgh"};
    cout << *(begin_def(str) + 1) << endl;
    cout << *(end_def(str) - 1) << endl;
    return 0;
}
