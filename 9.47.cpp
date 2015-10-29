/*************************************************************************
	> File Name: 9.47.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月28日 星期三 21时24分06秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s{"ab2c3d7R4E6"};
    string number{"0123456789"};
    string zimu{"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    string::size_type pos = 0;

    while ((pos = s.find_first_of(number, pos)) != string::npos) {
        cout << "number: " << pos << "  element is: " << s[pos] << endl;
        pos++;
    }
    pos=0;
    while ((pos = s.find_first_of(zimu, pos)) != string::npos) {
        cout << "number: " << pos << "  element is: " << s[pos] << endl;
        pos++;
    }

    pos=0;
    while ((pos = s.find_first_not_of(zimu, pos)) != string::npos) {
        cout << "number: " << pos << "  element is: " << s[pos] << endl;
        pos++;
    }
    pos = 0;
    while ((pos = s.find_first_not_of(number, pos)) != string::npos) {
        cout << "number: " << pos << "  element is: " << s[pos] << endl;
        pos++;
    }
}
