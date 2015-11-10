/*************************************************************************
	> File Name: 10.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月06日 星期五 11时27分43秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    vector<int> vec1;
    vector<int> vec2;
    list<int> vec3;

    copy(vec.begin(), vec.end(), inserter(vec1, vec1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(vec2));
    copy(vec.begin(), vec.end(), front_inserter(vec3));
    for(auto iter : vec)
        cout << iter << "  ";
    cout << endl;
    for(auto iter : vec1)
        cout << iter << "  ";
    cout << endl;
    for(auto iter : vec2)
        cout << iter << "  ";
    cout << endl;
    for(auto iter : vec3)
        cout << iter << "  ";
    cout << endl;
}
