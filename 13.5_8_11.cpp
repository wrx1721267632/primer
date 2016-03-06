/*************************************************************************
	> File Name: 13.5_8_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月12日 星期五 20时16分42秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &hp): ps(new string(*hp.ps)), i(hp.i) {}
    HasPtr& operator=(const HasPtr &hp) {
        string *ps1 = new string(*hp.ps);
        delete ps;
        ps = ps1;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
private:
    string *ps;
    int i;
};

int main()
{
    
}
