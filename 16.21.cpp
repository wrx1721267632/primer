/*************************************************************************
	> File Name: 16.21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月12日 星期六 15时16分53秒
 ************************************************************************/

#include<iostream>
#include<memory>
using namespace std;

class DebugDelete{
public:
    DebugDelete(ostream &s = cerr):os(s) {  }
    template<typename T>
    void operator()(T *p) const
    {
        cout << "delete unique_ptr" << endl;
        delete p;
    }
private:
    ostream &os;
};

int main()
{
    double *p = new double;
    DebugDelete d;
    d(p);
    int *ip = new int;
    DebugDelete()(ip);
    unique_ptr<int, DebugDelete> sp(new int, DebugDelete());
    return 0;
}
