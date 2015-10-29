/*************************************************************************
	> File Name: 8.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 11时58分47秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

void ReadFile(const string& filename, vector<string>& s)
{
    fstream read(filename);
    if(read){
        string buf;
        while(read >> buf){
            s.push_back(buf);
        }
    }
}

int main()
{
    vector<string> s;

    ReadFile("txt", s);
    for(const auto & str: s){
        cout << str <<endl;
    }
    return 0;
}
