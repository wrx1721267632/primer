/*************************************************************************
	> File Name: 9.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月22日 星期四 20时15分46秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

bool Found(vector<int> &vec, int i)
{
    for(auto j: vec){
        if(j == i){
            return true;
        }
    }
    cout << "not found" << endl;
    return false;
}

int main()
{
    vector<int> vec{1,2,3,4,5};
    int i;
    
    cin >> i;

    auto b = Found(vec,i);
    cout << b << endl;
    return 0;
}
