/*************************************************************************
	> File Name: 10.istream.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 14时35分31秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    istream_iterator<int> in(cin), eof;
    cout << accumulate(in, eof, 0) << endl;
}
