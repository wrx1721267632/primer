/*************************************************************************
	> File Name: 1_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月08日 星期二 13时42分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int v1, v2, m;
    cout << "please input tow number ";
    cin >> v1 >> v2;
    if (v1 > v2){
        m = v1;
        v1 = v2;
        v2 = m;
    }
    while (v1 != v2) {
        cout << " " << v1 << " ";
        v1++;
    }
    cout << " " << v2 << endl;
    return 0;
}
