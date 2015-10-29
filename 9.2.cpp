/*************************************************************************
	> File Name: 9.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月22日 星期四 20时04分00秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main()
{
    list<deque<int>> a{{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9}};

    for(auto b=a.begin(); b != a.end(); b++) {
        for(auto c=(*b).begin(); c != (*b).end(); c++){
            cout << *c << "  ";
        }
        cout << endl;
    }

    return 0;
}
