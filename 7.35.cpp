/*************************************************************************
	> File Name: 7.35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月14日 星期三 00时36分39秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef string Type;
//Type initVal();

class Exercise{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal(){return 1;};
private:
    int val;
};

Exercise::Type Exercise::setVal(Exercise::Type parm){
    val = parm + initVal();
    return val;
}

int main()
{
    return 0;
}
