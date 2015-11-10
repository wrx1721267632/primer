/*************************************************************************
	> File Name: 10.34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 22时19分42秒
 ************************************************************************/

#include<iostream>
//#include<reverse_iterator>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> vec{"abc","def","ghi"};

    for (auto iter=vec.rbegin(); iter != vec.rend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    for (auto iter=vec.begin(); iter != vec.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
