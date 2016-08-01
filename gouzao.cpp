/*************************************************************************
	> File Name: gouzao.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月15日 星期四 21时59分29秒
 ************************************************************************/

#include<iostream>
using namespace std;

class a
{
    public:
        a() = default;
        a(int b, double c): i(b), j(c){};
        void Print();
    private:
        int i;
        double j;
        double m;
};
        
void a:: Print()
{
    cout << "i: " << i << "\nj: " << j << "\nm: " << m <<endl;
}

int main()
{
    a n(1.1,1.1);
    
    n.Print();

    return 0;
}
