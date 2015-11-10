/*************************************************************************
	> File Name: 10.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 19时57分31秒
 ************************************************************************/

#include<iostream>
#include<numeric>
#include<vector>
#include<string>
#include<list>
using namespace std;

int main()
{
    vector<string> vec{"123","234","345"};
    list<char *> lis{"123", "234", "345"};
    list<char *> lis2{"12","23"};

    cout << equal(vec.cbegin(), vec.cend(), lis.cbegin()) << endl;
    cout << equal(vec.cbegin(), vec.cend(), lis2.cbegin()) << endl;
    cout << equal(lis.cbegin(), lis.cend(), lis2.cbegin()) << endl;
    return 0;
}
