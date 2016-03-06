/*************************************************************************
	> File Name: 13.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 17时23分21秒
 ************************************************************************/

#include<iostream>

class numbered {
public:
    numbered() {
        mysn = unique++;
    }

    numbered(const numbered& n) {
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 10;

void f(const numbered &s) {
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    //f(a);
    f(b);
    f(a);
    f(c);
    std::cout << a.mysn << " " << b.mysn << " " << c.mysn << std::endl;
    std::cout << a.unique << " " << b.unique << " " << c.unique << std::endl;
}
