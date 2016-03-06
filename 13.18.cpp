/*************************************************************************
	> File Name: 13.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月13日 星期六 00时08分51秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    Employee() {
        id_ = increment++;
    }
    Employee(const string &name) {
        id_ = increment++;
        name_ = name;
    }
    const int id() const { return id_; }
private:
    string name_;
    int id_;
    static int increment;
};

int Employee::increment = 0;

int main()
{
    
}
