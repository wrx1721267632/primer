/*************************************************************************
	> File Name: bulk_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月06日 星期日 16时56分48秒
 ************************************************************************/

#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H

#include"disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote()
    {
        std::cout << "Bulk_quote()" << std::endl;
    }
    
    Bulk_quote(const std::string &str, double p, size_t n, double d):Disc_quote(str, p, n, d) {
        std::cout << "Bulk_quote(const string&, double, size_t, double)" << std::endl;
    }
    
    Bulk_quote(const Bulk_quote &rhs):Disc_quote(rhs);
    {
        std::cout << "Bulk_quote(const Bulk_quote &)" << std::endl;   
    }

    Bulk_quote(const Bulk_quote && rhs):Disc_quote(std::move(rhs)) noexcept
    {
        std::cout << "Bulk_quote(const Bulk_quote &&)" << std::endl;
    }

    Bulk_quote& operator =(const Bulk_quote &rhs)
    {
        Disc_quote::operator =(rhs);
        std::cout << "Bulk_quote& operator =(const BUlk)" << std::endl;

        return *this;
    }

    Bulk_quote& operator =(const Bulk_quote && rhs)
    {
    
    }
};

#endif
