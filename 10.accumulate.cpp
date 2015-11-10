/*************************************************************************
	> File Name: 10.accumulate.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 19时21分20秒
 ************************************************************************/

#include<iostream>
#include<numeric>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> vec{"123","456","789","0"};
    string str;
    
    /*string sum = accumulate(vec.cbegin(), vec.cend(), "");
    cout << sum << endl;*/
    string sum = accumulate(vec.cbegin(), vec.cend(), str);
    cout << sum << endl;
}
