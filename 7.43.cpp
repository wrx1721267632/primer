/*************************************************************************
	> File Name: 7.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月14日 星期三 06时50分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class NoDefault
{
    public:
        NoDefault(int i){  };
};

class C
{
    public:
        C ():a(1) {};
    private:
        NoDefault a;
};

int main()
{
    C c;
    //std::vector<NoDefault> sum(10);
    std::vector<C> vec(10);

    return 0;
}
