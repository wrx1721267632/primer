/*************************************************************************
	> File Name: 16.static.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月12日 星期六 12时34分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T> 
class Foo
{
private:
    static int n;
public:
    static void show() { cout << n << endl; }
    static void Change(int num) { n = num; }
};

template <typename T>
int Foo<T>::n = 11;

int main()
{
    Foo<int> a, b, c;
    Foo<string> d,e;
    a.show();
    b.show();
    c.show();
    d.show();
    e.show();
    
    b.Change(1);
    c.Change(2);

    a.show();
    b.show();
    c.show();
    d.show();
    e.show();
}
