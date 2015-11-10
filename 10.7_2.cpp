/*************************************************************************
	> File Name: 10.7_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 22时31分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(10);
    fill_n(back_inserter(vec), 10, 0);

    for (auto iter : vec) {
        cout << iter << " ";
    }
    cout << endl;
}
