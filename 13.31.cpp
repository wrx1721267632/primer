/*************************************************************************
	> File Name: 13.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 19时38分40秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class HasPtr {
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &, const HasPtr &);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(HasPtr hp) {
        this -> swap(hp);
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
    void swap(HasPtr &rhs) {
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
        cout << "swap()" << endl;
    }
    void show() {
        cout << *ps << endl;
    }
private:
    std::string *ps;
    int i;
};

inline 
void swap(HasPtr &lhs, HasPtr &rhs)
{
    lhs.swap(rhs);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}

int main()
{
    HasPtr s{"s"}, a{"a"}, c{"c"};
    vector<HasPtr> vec{s,a,c};
    sort(vec.begin(), vec.end());

    for(auto item : vec) {
        item.show();
    }
}
