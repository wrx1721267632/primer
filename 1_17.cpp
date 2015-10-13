/*************************************************************************
	> File Name: 1_17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月08日 星期二 14时01分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                cout << currVal << " occurs " << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times " << endl;
    }
    return 0;
}
