/*************************************************************************
	> File Name: 12.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月12日 星期四 20时46分06秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
using namespace std;

shared_ptr<vector<int>> make_with_shared()
{
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> populate(shared_ptr<vector<int>> vec)
{
    for (int i; cout << "input: ", cin >> i; vec->push_back(i));
    return vec;
}

void Print(shared_ptr<vector<int>> vec)
{
    for (auto iter : *vec) {
        cout << iter << "  ";
    }
    cout << endl;
}

int main()
{
    auto vec = populate(make_with_shared());
    Print(vec);
    return 0;
}
