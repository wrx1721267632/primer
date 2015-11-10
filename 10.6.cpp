/*************************************************************************
	> File Name: 10.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 22时18分24秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec{11,2,3,4,5,6,7,8,9,0};

    fill_n(vec.begin(), vec.size(), 0);
    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
}
