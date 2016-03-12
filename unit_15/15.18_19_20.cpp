/*************************************************************************
	> File Name: 15.18_19_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月05日 星期六 12时25分36秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base {
public:
    void pub_mem();
protected:
    int prot_mem;
private:
    char priv_mem;
};

struct Pub_Drev : public Base {
    void memfcn(Base &b) { b = *this; }
};

struct Priv_Drev : private Base {
    void memfcn(Base &b) { b = *this; }
};

struct Prot_Drev : protected Base {
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Drev {
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_private : private Priv_Drev {
    //void memfcn(Base &b) { b = *this; }  
};

struct Derived_from_protected : protected Prot_Drev {
    void memfcn(Base &b) { b = *this; }
};

int main()
{
    Pub_Drev d1;
    Priv_Drev d2;
    Prot_Drev d3;
    Derived_from_Public dd1;
    Derived_from_private dd2;
    Derived_from_protected dd3;
    
    Base *p = &d1;
    //p = &d2;
    //p = &d3;
    p = &dd1;
    //p = &dd2; 
    //p = &dd3;
}
 


