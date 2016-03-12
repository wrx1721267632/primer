/*************************************************************************
	> File Name: limit_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月03日 星期四 15时37分46秒
 ************************************************************************/

#ifndef _LIMIT_QUOTE_H
#define _LIMIT_QUOTE_H
#endif

#include<string>
#include<iostream>
using namespace std;

class Limit_quote : public Quote {
public:
    Limit_quote() =default;
    Limit_quote(const string &book, double price_total, size_t n, double count):Quote(book, price_total), max_qty(n),discount(count) {  }
    double net_price(size_t n) const override {
        if ( n < max_qty ) {
            return n * (1 - discount) * price;
        } else {
            return price * n;
        }
    }
    void debug() const override {
        Quote::debug();
        cout << "max_qty: " << this->max_qty << "     discount: " << this->discount << endl;
    }
private:
    size_t max_qty = 0;
    double discount = 0.0;
};
