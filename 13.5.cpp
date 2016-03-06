/*************************************************************************
	> File Name: 13.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 16时32分02秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()):ps(new string(s)), i(0) {  }
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i) {  }
private:
    string *ps;
    int i;
};
