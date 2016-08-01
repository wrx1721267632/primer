/*************************************************************************
	> File Name: quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月06日 星期日 16时07分41秒
 ************************************************************************/

#ifndef _QUOTE_H
#define _QUOTE_H

#include<string>
#include<iostream>

class Quote {
    friend bool operator !=(const Quote &lhs, const Quote &rhs);
public:
    Quote() 
    { 
        std::cout << "Quote()" << std::endl; 
    };
    
    Quote(const std::string str, double p):bookNO(str), price(p) 
    {
        std::cout << "Quote(string, double)"<< std::endl;
    }
    
    Quote(const Quote & q):bookNO(q.bookNO), price(q.price) 
    {
        std::cout << "Quote(const Quote &)" << std::endl;
    }
    
    Quote(const Quote && q) noexcept : bookNO(std::move(q.bookNO)), price(std::move(q.price)) 
    {
        std::cout << "Quote(const Quote &&)" << std::endl;
    }

    Quote& operator =(const Quote &rhs) 
    {
        if (*this != rhs) 
        {
            bookNO = rhs.bookNO;
            price = rhs.price;
        }
        std::cout << "Quote& operator =(const Quote &)" << std::endl;
    
        return *this;
    }

    Quote& operator =(const Quote &&rhs) noexcept
    {
        if (*this != rhs) 
        {
            bookNO = std::move(rhs.bookNO);
            price = std::move(rhs.price);
        }
        std::cout << "Quote& operator =(const Quote&&)" << std::endl;
        
        return *this;
    }

    std::string isbn() const 
    {
        return bookNO;
    }

    virtual double net_price(std::size_t n) const
    {
        return n * price;
    }

    virtual void debug() const ;
    
    virtual ~Quote() 
    {
        std::cout << "virtual ~Quote()" << std::endl;
    }
private:
    std::string bookNO;
protected:
    double price = 10.0;
};

void Quote::debug() const 
{
    std::cout << "bookNO: " << bookNO << "   price: " << price << std::endl;
}

bool inline 
operator !=(const Quote &lhs, const Quote &rhs)
{
    return  lhs.bookNO != rhs.bookNO && lhs.price != rhs.price;
}

#endif 
