/*************************************************************************
	> File Name: 9.51.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 12时14分42秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class TIME
{
    public:
        TIME(): year(0), month(0), day(0) { }
        void input_time(string );
        void Print();
    private:
        unsigned year;
        unsigned month;
        unsigned day;
};

void TIME :: input_time(string str)
{
    if (str.find("/") != string::npos) {
        /*auto pos = str.find("/");
        auto pot = str.rfind("/");
        string day1(str, 0, pos);
        string year1(str, pot+1);
        string month1(str, pos+1, pot-pos);
        year = stoi(year1);
        month = stoi(month1);
        day = stoi(day1);*/
        day = stoi(str.substr(0, str.find_first_of("/")));
        month = stoi(str.substr(str.find_first_of("/")+1, str.find_last_of("/") - str.find_first_of("/")));
        year = stoi(str.substr(str.find_last_of("/")+1, 4));
    }   
}

void TIME :: Print()
{
    cout << "year: " << year << endl;
    cout << "month: " << month << endl;
    cout << "day: " << day << endl;
}

int main()
{
    string str;
    TIME a;   
    cout << "please input a time: ";
    cin >> str;
    a.input_time(str);
    a.Print();
}
