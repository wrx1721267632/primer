/*************************************************************************
	> File Name: 15.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月04日 星期五 21时11分01秒
 ************************************************************************/

#include<iostream>
#include<string>

#include"quote.h"
#include"disc_bulk_quote.h"
using namespace std;

void print_debug(const Quote &q)
{
    q.debug();
}

int main()
{
    Quote q("aaa", 10.60);
    Bulk_quote bq("bbb", 111, 10, 0.3);
    Limit_quote lq("ccc", 222, 10, 0.3);

    /** @note   Not dynamic binding!
     *  The codes below are not dynamic binding. The compiler has known what the
     *  r refering to at compile time. As a result, the virtual function debug of
     *  the subobject is called.
     */
    Quote *r = &q;
    r->debug();
	std::cout << "\n";
    r = &bq;
    r->debug();
	std::cout << "\n";
    r = &lq;
    r->debug();
	std::cout << "\n";


    std::cout << "====================\n";
    
    q.debug();
    bq.debug();
    lq.debug();
    print_debug(q);
    print_debug(bq);
    print_debug(lq);
    return 0;
}
