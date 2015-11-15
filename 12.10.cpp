/*************************************************************************
	> File Name: 12.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月12日 星期四 22时38分44秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << ptr.use_count() << "  " << *ptr  <<endl;
}

int main()
{
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p));
    cout << p.use_count() << "  " << *p << endl;
    return 0;
}
