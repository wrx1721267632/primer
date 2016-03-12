/*************************************************************************
	> File Name: disc_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月06日 星期日 16时28分27秒
 ************************************************************************/

#ifndef _DISC_QUOTE_H
#define _DISC_QUOTE_H

#include"quote.h"

class Disc_quote : public Quote {
    friend bool operator != (const Disc_quote &lhs, const Disc_quote &rhs);
public:
    Disc_quote() 
    {
        std::cout << "Disc_quote()" << std::endl;
    }
    
    Disc_quote(const std::string str, double p, std::size_t n, double d):Quote(str, p), quantity(n), discount(d)
    {
        std::cout << "Disc_quote(string, double, size_t, double)" std::endl;
    }
    
    Disc_quote(const Disc_quote &rhs):Quote(rhs), quantity(rhs.quantity), discount(rhs.discount)
    {
        std::cout << "Disc_quote(const Disc_quote&)" << std::endl;
    }
    
    Disc_quote(const Disc_quote &&rhs) noexcept : Quote(std::move(rhs)), quantity(std::move(rhs.quantity)), discount(std::move(rhs.discount))
    {
        std::cout << "Disc_quote(const Disc_quote &&)" << std::endl;
    }
    
    Disc_quote& operator =(const Disc_quote & rhs)
    {
        Quote::operator =(rhs);
        this->quantity = rhs.quantity;
        this->discount = rhs.discount;

        std::cout << "Disc_quote& operator =(const Disc_quote)" << std::endl;
    
        return *this;
    }
    
    Disc_quote& operator =(const Disc_quote && rhs)
    {
        if ( *this != rhs ) 
        {
            Quote::operator =(std::move(rhs));
            this->quantity = std::move(rhs.quantity);
            this->discount = std::move(rhs.discount);
        }
        std::cout << "Disc_quote& operator =(const Disc_quote &&)" << std::endl;
        
        return *this;
    }

    virtual double net_price(std::size_t n) const override = 0;

    ~Disc_quote()
    {
        std::cout << "~Disc_quote()" << std::endl;
    }
protected:
    std::size_t quantity = 3;
    double      discount = 0.0;
};

bool inline 
operator != (const Disc_quote& lhs, const Disc_quote &rhs)
{
    return  Quote(lhs) != Quote(rhs)
            && lhs.quantity != rhs.quantity
            && lhs.discount != rhs.discount;
}

#endif
