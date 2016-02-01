/*************************************************************************
	> File Name: 12.19_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年01月31日 星期日 12时42分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<initializer_list>
#include<memory>
#include<stdexcept>
#include<fstream>
#include<iostream>
using namespace std;

class StrBlobPtr;

class StrBlob{
public:
    friend class StrBlobPtr;

    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlob():data(make_shared<vector<string>>()) {}
    StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)) {}

    vector<string>::size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    
    void push_back(const string &t) { data->push_back(t); }
    void pop_back() { 
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    string& front() {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    string& back() {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    const string& front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const string& back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    void check(vector<string>::size_type i, const string &msg) const {
        if (i >= data->size()) throw out_of_range(msg);
    }
    std::shared_ptr<vector<string>> data;
};

class StrBlobPtr {
public:
    StrBlobPtr():curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz=0):wptr(a.data),curr(sz) {}
    bool operator != (const StrBlobPtr &p) {return p.curr != curr;}
    string & deref() const
    {
        auto p=check(curr, "dereference past end");
        return (*p)[curr];
    }
    StrBlobPtr & incr()
    {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    shared_ptr<vector<string>> check(size_t i, const string &msg) const 
    {
        auto ret = wptr.lock();
        if(!ret) throw runtime_error("unbound StrBlobPtr");
        if(i >= ret->size()) throw out_of_range(msg);
        return ret;
    }
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this, 0);
}
StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}

int main()
{
    ifstream ifs("txt");
    StrBlob blob;
    for (string str; getline(ifs, str);)  blob.push_back(str);
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end());pbeg != pend; pbeg.incr())
    cout << pbeg.deref() << endl;
}
