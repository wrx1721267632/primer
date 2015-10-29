/*************************************************************************
	> File Name: 9.26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月27日 星期二 19时22分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(ia, end(ia));
    list<int> lis(vec.begin(), vec.end());

    for(auto it = vec.begin(); it != vec.end();){
        if(*it % 2 == 0) {
            it = vec.erase(it);    //删除后it不存在，但该操作返回删除迭代器的下一个迭代器，所以有该操作无需再it++
        } else {
            it++;
        }
    }

    for (auto it = lis.begin(); it != lis.end(); ) {
        if (*it % 2 == 1) {
            it = lis.erase(it);
        } else {
            it++;
        }
    }

    for (auto iter : vec) {
        cout << iter << "  ";
    }
    cout << endl;
    for (auto iter : lis) {
        cout << iter << "  ";
    }
    cout << endl;
    return 0;
}
