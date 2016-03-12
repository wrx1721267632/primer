/*************************************************************************
	> File Name: quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月03日 星期四 13时49分57秒
 ************************************************************************/

#ifndef _QUOTE_H
#define _QUOTE_H
#endif

#include<string>
#include<iostream>
using namespace std;

class Quote {
public:
    Quote() = default;
    Quote(const string &book, double price_total):bookNO(book), price(price_total) {  }
    string isbn() const { return bookNO; }
    virtual double net_price(size_t n) const { return n * price; }
    virtual ~Quote() = default;
    virtual void debug() const{
        cout << "bookNO: " << this->bookNO << "    price: " << this->price << endl;
    }
private:
    string bookNO;
protected:
    double price;
};

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}
