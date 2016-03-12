/*************************************************************************
	> File Name: disc_bulk_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月04日 星期五 20时49分12秒
 ************************************************************************/

#ifndef _DISC_BULK_QUOTE_H
#define _DISC_BULK_QUOTE_H
#endif

#include<iostream>
#include<string>

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc):Quote(book, price), quantity(qty), discount(disc) {  }
    double net_price(std::size_t) const = 0; 
protected:
    std::size_t quantity;
    double discount;
};

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double price, std::size_t qty, double disc):Disc_quote(book, price, qty, disc) {  }
    double net_price(std::size_t) const override;
    void debug() const override;
};

double Bulk_quote::net_price(std::size_t n) const
    
{
    return n * price * (n >= quantity ? 1-discount : 1);
}

void Bulk_quote::debug() const 
{
    Quote::debug();
    std::cout << "min_qty: " << quantity << "  discount: " << discount << std::endl;
}

class Limit_quote : public Disc_quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string &book, double price, std::size_t qty, double disc):Disc_quote(book, price, qty, disc) {  }
    double net_price(std::size_t) const override;
    void debug() const override;
};

double Limit_quote::net_price(std::size_t n) const
{
    return n * price * (n < quantity ? 1-discount : 1);
}

void Limit_quote::debug() const
{
    Quote::debug();
    std::cout << "min_qty: " << quantity << "  discount: " << discount << std::endl;
}
