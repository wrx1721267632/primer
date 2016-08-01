/*************************************************************************
	> File Name: 14.operator.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月01日 星期二 21时25分45秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Str{
    friend ostream &operator<<(ostream &os, const Str &S);
    friend istream &operator>>(istream &is, Str &S);
    friend Str operator+(const Str &lhs, const Str &rhs);
    friend bool operator==(const Str &lhs, const Str &rhs);
    friend bool operator!=(const Str &lhs, const Str &rhs);
    friend bool operator<(const Str &lhs, const Str &rhs);
public:
    Str() = default;
    Str(string str2):str1(str2), str_size(str2.size()) {  }
    Str(const Str &S):str1(S.str1), str_size(S.str_size) {  }
    Str& operator=(const Str &S) {
        str1 = S.str1;
        str_size = S.str_size;
        return *this;
    }
    Str &operator+=(const Str &rhs)
    {
        str1 += rhs.str1;
        str_size = str1.size();
        return *this;
    }
    char& operator[](size_t n) {
        return str1[n];
    }
    const char& operator[](size_t n) const{
        return str1[n];
    }
    void operator()(const string &s) {
        cout << "函数调用运算符:" << s << endl;
    }
private:
    string str1;
    int str_size;
};

bool operator==(const Str &lhs, const Str &rhs)
{
    return lhs.str1 == rhs.str1;
}

bool operator!=(const Str &lhs, const Str &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const Str &lhs, const Str &rhs)
{
    if(lhs.str_size < rhs.str_size) 
        return true;
    if(lhs.str_size == rhs.str_size)
        return lhs.str1 < rhs.str1;
}

ostream &operator<<(ostream &os, const Str &S)
{
    os << "数据： " << S.str1  << "  " << "大小：" << S.str_size << endl;
    return os;
}

istream &operator>>(istream &is, Str &S)
{
    cout << "请输入数据!" << endl;
    is >> S.str1;
    if(is)
        S.str_size = S.str1.size();
    else
        S = Str();
    return is;
}

Str operator+(const Str &lhs, const Str &rhs)
{
    Str sum = lhs;
    sum += rhs;
    return sum;
}

int main()
{
    Str txt("abc");
    Str abc("bcd");
    txt("hi boy!");
    cout << txt;
    cout << abc;
    if (txt == abc) cout << "yes" << endl;
    else cout << "no" <<endl;
    abc += txt;
    cout << txt;
    cout << abc;
    cin >> abc;
    cout << abc;
    Str sum = txt + abc;
    cout << sum;
    cout << sum[2] << endl;
    sum[2] = '1';
    cout << sum;
    
    return 0;
}
