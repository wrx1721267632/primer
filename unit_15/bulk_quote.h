/*************************************************************************
	> File Name: bulk_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月03日 星期四 15时13分05秒
 ************************************************************************/

#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H
#endif

#include<string>
#include<iostream>
using namespace std;

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const string &book, double price_total, size_t n, double count):Quote(book, price_total), min_qty(n), discount(count) {  }
    double net_price(size_t n) const override {
        if (n > min_qty) {
            return n * (1 - discount) *price;
        } else {
            return n * price;
        }
    }
    void debug() const override {
        Quote::debug();
        cout <<  "min_qty: " << this->min_qty << "    discount: " << this->discount << endl;
    }
private:
    size_t min_qty = 0;
    double discount = 0.0;
};
