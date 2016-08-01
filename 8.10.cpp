/*************************************************************************
	> File Name: 8.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月21日 星期三 19时41分31秒
 ************************************************************************/

#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    ofstream fout("txt");
    if (!fout)
    {
        cout << "no data" << endl;
        return -1;
    }
    fout << "Learning C++ programming is fun!";    

    ifstream file("txt");
    if (!file) {
        cout << "no data" << endl;
        return -1;
    }
    fout.close();

    vector<string> vec;
    string line;
    while(getline(file, line)){
        vec.push_back(line);
    }
    
    for (auto &s:vec) {
        string word;
        istringstream iss(s);
        while(iss >> word){
            cout << word << " ";
        } 
    }
    cout << endl;
    file.close();
    return 0;
}
