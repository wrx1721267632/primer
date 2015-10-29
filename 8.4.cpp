/*************************************************************************
	> File Name: 8.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 11时33分34秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

void ReadFile(const string& filename, vector<string>& s)
{
    ifstream read(filename);
    if(read){
        string buf;
        while(getline(read, buf)){
            s.push_back(buf);
        }
    }
}

int main()
{
    vector<string> s;
    int i;

    ReadFile("txt",s);
    for (const auto &str:s) {
        cout << str << endl;
        i++;
    }
    return 0;
}
