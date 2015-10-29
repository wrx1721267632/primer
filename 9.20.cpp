/*************************************************************************
	> File Name: 9.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月26日 星期一 17时35分43秒
 ************************************************************************/

#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
    list<int> lis{1,2,3,4,5,6,7,8,9};
    deque<int> input1;
    deque<int> input2;

    for(auto iter : lis) {
        if (iter%2 != 0) {
            input1.push_back(iter);
        } else {
            input2.push_back(iter);
        }
    }
    
    cout << "1: ";
    for (auto iter : input1) {
        cout << iter;
    }
    cout << endl;
    cout << "2: ";
    for (auto iter : input2) {
        cout << iter;
    }
    cout << endl;
    return 0;
}
