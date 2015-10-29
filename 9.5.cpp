/*************************************************************************
	> File Name: 9.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月22日 星期四 20时50分23秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

vector<int>::iterator Found(vector<int> &vec, int i)
{
    for (auto a=vec.begin(); a != vec.end(); a++) {
        if (*a == i) {
            return a;
        }
    }

    cout << "not found" << endl;
}

int main()
{
    int i;
    vector<int> vec{1,2,3,4,5};

    cin >> i;
    auto j=Found(vec, i);
    cout << *j << endl;
    return 0;
}
