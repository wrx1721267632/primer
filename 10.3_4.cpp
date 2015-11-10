/*************************************************************************
	> File Name: 10.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 19时49分58秒
 ************************************************************************/

#include<iostream>
#include<numeric>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{12,23,45,67,89};

    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum <<endl;

    vector<double> vec2{1.2,2.3,4.5,6.7,8.9};

    double sum2 = accumulate(vec2.begin(), vec2.end(), 0.0);
    cout << sum2 << endl;
    return 0;
}
