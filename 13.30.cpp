/*************************************************************************
	> File Name: 13.30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 19时25分41秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(const HasPtr &hp) {
        std::string *new_ps = new std::string(*hp.ps);
        delete ps;
        ps = new_ps;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
    void show() { cout << *ps << endl; }
private:
    std::string *ps;
    int i;
};

inline
void swap(HasPtr &lhs, HasPtr &rhs) 
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, lhs.i);
    cout << "swap()" << endl;
}
