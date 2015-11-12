/*************************************************************************
	> File Name: 12.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月12日 星期四 20时30分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

vector<int>* make_new()
{
    return new vector<int> {};
}

vector<int>* populate(vector<int>* vec) 
{
    for (int i; cout << "input: ",cin >> i; vec->push_back(i));
    return vec;
}

auto Print(vector<int> *vec)->ostream&
{
    for (auto i : *vec) {
        cout << i << " ";
    }
    return cout;
}

int main()
{
    vector<int> *vec = populate(make_new());
    Print(vec) << endl;
    delete vec;
    return 0;
}
