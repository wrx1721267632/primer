/*************************************************************************
	> File Name: 15.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月03日 星期四 15时43分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

double print_total (std::ostream& os, const Quote& item, size_t n);
int main()
{
    // ex15.6
    Quote q("textbook", 10.60);
    Bulk_quote bq("textbook", 10.60, 10, 0.3);
    Limit_quote lq("Bible", 10.60, 10 , 0.3);

    print_total(std::cout, q, 5);
    print_total(std::cout, bq, 5);
    print_total(std::cout , lq, 5);

    return 0;
}
