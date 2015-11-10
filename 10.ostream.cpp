/*************************************************************************
	> File Name: 10.ostream.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 15时25分40秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> vec{1,2,3,4,5,6,7,8,9};

    for(auto iter : vec) {
        *out_iter++ = iter;
    }
    cout << endl;

    copy(vec.begin(), vec.end(), out_iter);
    cout << endl;
    return 0;
}
