/*************************************************************************
	> File Name: strvec.h
	> Author: 
	> Mail: 
	> Created Time: 2016年08月01日 星期一 10时21分15秒
 ************************************************************************/

#ifndef _STRVEC_H
#define _STRVEC_H

#include<memory>
#include<iostream>
#include<string>
#include<map>
#include<initializer_list>
#include<algorithm>

class strvec
{
    friend bool operator == (const strvec &lhs, const strvec &rhs);
    friend bool operator != (const strvec &lhs, const strvec &rhs);
    friend bool operator < (const strvec &lhs, const strvec &rhs);

public:
    strvec():elements(nullptr), first_free(nullptr), cap(nullptr) {  }
    strvec(const std::initializer_list<std::string> &il);
    strvec(const strvec &sv);               //复制构造函数
    strvec(strvec &&sv) noexcept;           //移动构造函数
    strvec& operator=(const strvec &sv);
    strvec& operator=(const strvec &&sv)noexcept;
    strvec& operator=(const std::initializer_list<std::string>&il);
    ~strvec();

    void push_back(const std::string &s);
    std::size_t size()const 
    {
        return first_free - elements;
    }

    std::size_t capacity()const
    {
        return cap - elements;
    }

    std::string* begin()const
    {
        return elements;
    }

    std::string* end()const
    {
        return first_free;
    }

    void reserve(std::size_t n);
    void resize(std::size_t n)
private:
    static std::allocator<std::string> alloc;           //分配元素
    void chk_n_alloc() { if ( size() == capacity() ) rellocate(); }       //若空间用尽，增加空间
    std::pair<std::string *, std::string *> alloc_n_copy                //
        (const std::string*b, const std::string *e);
    void free();        //释放所占的所有空间
    void reallocate();  //增加空间
    
    std::string *elements;          //首指针
    std::string *first_free;        //末元素的下一个位置（以存有元素的最后）
    std::string *cap;               //分配的内存末位之后的位置（分配内村的最后）
};

strvec::strvec(const std::initializer_list<std::string> &il)
{
    elements = nullptr;
    first_free = nullptr;
    cap = nullptr;
    
    for (const auto item : il)
    {
        push_back(item);
    }
}

strvec::strvec(const strvec &sv)
{
    auto newdata = alloc_n_copy(sv.begin(), sv.end());
    elements = newdata.first;
    cap = first_free = newdata.second;
}

strvec::strvec(const strvec && sv)
{
    elements = sv.elements;  
    first_free = sv.first_free;  
    cap = sv.cap;  
    sv.elements = sv.first_free = sv.cap = nullptr;
}

strvec& strvec::operator=(const strvec &sv)
{
    auto newdata = alloc_n_copy(sv.begin(), sv.end());
    free();
    elements = new.first;
    first_free = cap = newdata.second;
    return *this;
}

strvec& strvec::operator=(strvec && sv)noexcept
{
    if (sv != *this)
    {
        free();
        elements = sv.elements;  
        first_free = sv.first_free;  
        cap = sv.cap;  
        sv.elements = sv.first_free = sv.cap = nullptr;  
    }
    return *this
}

strvec& strvec::operator=(const std::initializer_list<std::string> &il)
{
    auto newdata = alloc_n_copy(il.begin(), il.end());
    free();
    elements = newdata.first;
    first_free = cap = newdata.second;
    return *this;
}

strvec::~strvec()
{
    free();
}

void strvec::push_back(const std::string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

void strvec::reserve(std::size_t n)
{
    if (n > capacity())
    {
        auto newcapacity = n;
        auto newdata = alloc.allocate(newcapacity);
        auto dest = newdata;
        auto elem = elements;
        for (std::size_t i = 0; i != size(); i++)
        {
            alloc.construct(dest++, std::move(*elem++));
        }
        free();
        elements = newdata;
        first_free = dest;
        cap = elements + n;
    }
}

void strvec::resize(std::size_t n)
{
    std::size_t t = n - size();  
    if(n < size())  
    {  
        while(n--)  
        {  
            alloc.destroy(--first_free);  
        }  
    }  
    else if(n > size() && n <= capacity())  
    {  
        for(std::size_t i = 0; i < t; ++i)  
        {  
            alloc.construct(first_free+i, " ");  
        }  
    }  
    else if(n > capacity())  
    {  
        auto newcapacity = n;  
        auto newdata = alloc.allocate(newcapacity);  
        auto dest = newdata;  
        auto elem = elements;  
        for(std::size_t i = 0; i != size(); ++i)  
            alloc.construct(dest++, std::move(*elem++));  
        for(std::size_t i = size(); i <= capacity(); ++i)  
            alloc.construct(dest++, " ");  
        free();  
        elements = newdata;  
        first_free = newdata+n;  
        cap = newdata+n;  
    }  
}

std::pair<std::string*, std::string*> strvec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, uninitialized_copy(b, e, data)};
}

void strvec::free()
{
    if (elements)
    {
        for (auto p = first_free; p != elements; )
        {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, cap-elements);
    }
}

void strvec::reallocate()
{
    auto newcapacity = size() ? 2 * size(): 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;

    for (std::size_t i = 0; i != size(); i++)
    {
        alloc.allocate(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    elements = dest;
    cap = elements + newcapacity;
}
#endif
