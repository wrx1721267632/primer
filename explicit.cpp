/*************************************************************************
	> File Name: explicit.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月16日 星期五 16时12分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

class data
{
    public:
        data() = default;
        explicit data(int i,int j,double k): a(i), b(j), c(k){};
        data(int i):a(i) {};
        void Print();
    private:
        int a;
        int b;
        double c;
};

void data:: Print()
{
    cout << "\na: " << a << "\nb: " << b << "\nc: " << c << endl;
}

int main()
{
    data m(1,1,0.1);
    data n(1);
    double k;

    m.Print();
    n.Print();
    cout << "\nk: " << k <<endl;

    return 0;
}
