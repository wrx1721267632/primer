/*************************************************************************
	> File Name: 12.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月12日 星期四 12时24分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<exception>
#include<initializer_list>
using namespace std;

class StrBlob
{
    public:
        using size_type = vector<string>::size_type;
        StrBlob():data(make_shared<vector<string>>()) {}
        StrBlob(initializer_list<string> li): data(make_shared<vector<string>>(li)) {}

        size_type size() const { return data->size(); }
        bool empty() const { return data->empty(); }
        
        void push_back(const string &t) { data->push_back(t); }
        void pop_back() {
            check(0, "pop_back on empty StrBolb");
            data->pop_back();
        }

        string &front() {
            check(0, "front on empty StrBolb");
            return data->front();
        }
        string &back() {
            check(0, "back on empty StrBlob");
            return data->back();
        }
    
        const string &front() const {
            check(0, "front on empty StrBolb");
            return data->front();
        }
        const string &back() const {
            check(0, "back on empty StrBlob");
            return data->back();
        }

    private:
        shared_ptr<vector<string>> data;
        void check (size_type i, const string &msg) const {
            if ( i>=data->size() ) {
                throw out_of_range(msg);
            }
        }
};

int main()
{
    const StrBlob csb{ "hello", "world", "pezy"};
    StrBlob sb;

    cout << csb.front() << " " << csb.back() << endl;
    cout << csb.empty() << "    " << sb.empty() << endl;
    sb.push_back("and");
    cout << sb.front() << " " << sb.back() << endl;
    sb.pop_back();
    sb.push_back("out");
    sb.front() = "or";
    cout << sb.front() << " " << sb.back() << endl;
    sb.push_back("1");
    sb.front() = "2";
    sb.back() = "3";
    cout << sb.front() << " " << sb.back() << endl;

    StrBlob b2 = {"a", "an", "the"};
    StrBlob b1 = b2;
    b2.push_back("about");
    cout << b1.size() << "  " << b2.size() << endl;
    return 0;
}
