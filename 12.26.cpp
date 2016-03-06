/*************************************************************************
	> File Name: 12.26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月11日 星期四 12时28分57秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<string>
using namespace std;

int main()
{
    int n;
    cout << "please input n: " << endl;
    cin >> n;
    allocator<string> alloc;
    auto p = alloc.allocate(n);
    string s;
    auto q = p;
    while (q != p+n && cin >> s) {
        alloc.construct(q++, s);
    }
    while (q != p) {
        cout << *--q << endl;
        alloc.destroy(q);
    }
    alloc.deallocate(p,n);
}
