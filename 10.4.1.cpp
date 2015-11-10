/*************************************************************************
	> File Name: 10.4.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月06日 星期五 10时30分10秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> vec{"aaa","bbb","ccc"};
    string str{"ddd"};

    auto it = inserter(vec,vec.begin());
    *it = str;
    for (auto iter : vec)
        cout << iter << "  ";
    cout << endl;
}
