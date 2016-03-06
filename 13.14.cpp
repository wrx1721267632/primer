#include <iostream>

class numbered {
public:
    numbered() {
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 10;

void f(numbered s) {
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    std::cout << a.mysn << " " << b.mysn << " " << c.mysn << std::endl;
    std::cout << a.unique << " " << b.unique << " " << c.unique << std::endl;
}
