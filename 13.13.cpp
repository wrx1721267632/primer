/*************************************************************************
	> File Name: 13.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 16时55分47秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<initializer_list>
using namespace std;

struct X {
    X() { cout << "X()" << endl; }
    X(const X&) { cout << "X(const X&)" << endl; }
    X& operator=(const X&) { cout << "X& operator=(const X&)" << endl; }
    ~X() { cout << "~X()" << endl; }
};

void f(const X &rx, X x)
{
    cout << "3" << endl;
    vector<X> vec;
    vec.reserve(2); cout << "4" << endl;
    vec.push_back(rx); cout << "5" << endl;
    vec.push_back(x); cout << "6" << endl;
}

int main()
{
    X *px = new X; cout << "1" << endl;
    f(*px, *px); cout << "2" << endl;
    delete px; cout << "7" << endl;

    return 0;
}
