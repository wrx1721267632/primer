/*************************************************************************
	> File Name: 13.8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 16时38分58秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class HasPtr {    
public:
    HasPtr(const string &s = string()):ps(new string(s)), i(0) {  }
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i) {  }
    HasPtr& operator=(const HasPtr &hp) {
        string *new_ptr = new string(*hp.ps);
        delete ps;
        ps = new_ptr;
        i = hp.i;
        return *this;
    }
private:
    string *ps;
    int i;
};
