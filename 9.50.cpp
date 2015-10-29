/*************************************************************************
	> File Name: 9.50.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月28日 星期三 22时01分27秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> vec{"123", "124", "125"};
    int sum = 0;

    for (auto iter : vec) {
        sum = sum + stoi(iter);
    }
    cout << sum << endl;

    vector<string> vec2{"12.3", "12.4", "12.5"};
    double sum2 = 0.0;

    for (auto iter : vec2) {
        sum2 = sum2 + stod(iter);
    }
    cout << sum2 << endl;
    return 0;
}
