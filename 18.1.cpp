/*************************************************************************
	> File Name: 18.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月07日 星期一 16时27分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    range_error r("error");
    throw r;

    exception *p = &r;
    throw *p;
}
