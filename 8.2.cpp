/*************************************************************************
	> File Name: 8.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月20日 星期二 21时10分52秒
 ************************************************************************/

#include<iostream>
using namespace std;

istream& fun(istream&is)
{
    string a;
    while(is >> a){
        cout << a << endl;
    }
    cout << is.rdstate() << endl;
    is.clear();
    return is;
}

int main()
{
    istream& is = fun( cin );
    cout << is.rdstate() << endl;
    return 0;
}
