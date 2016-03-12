#include<iostream>
#include"quote.h"
#include"bulk_quote.h"
using namespace std;

int main()
{
    Quote q("textbook", 10.60);
    Bulk_quote bq("textbook", 10.60, 10, 0.3);

    print_total(std::cout, q, 5);
    print_total(std::cout, bq, 50);
    //print_total(std::cout , lq, 5);

    return 0;
}



