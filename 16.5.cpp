/*************************************************************************
	> File Name: 16.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月11日 星期五 17时34分26秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

template<typename T>
void print(T const& arr)
{
    for (auto item : arr)
    {
        cout << item << endl;
    }
}

int main()
{
    string s[] = {"aaaaa", "bbbbbb", "ccccccc"};
    char c[] = {'a', 'b', 'c', 'd'};
    int i[] = { 1 };

    print(s);
    print(c);
    print(i);
}
