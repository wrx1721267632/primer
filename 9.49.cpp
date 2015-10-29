/*************************************************************************
	> File Name: 9.49.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月29日 星期四 00时13分57秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("filename");
    if (!file) {
        cout << "no data" << endl;
        return -1;
    }

    string word;
    vector<string> vec;
    int longest=0;
    while (file >> word) {
        if(word.size() > longest) {
            if(string::npos == word.find_first_of("qtypdfghjkl")){
                vec.clear();
                vec.push_back(word);
                longest = word.size();
            }
        } else if(word.size() == longest) {
            if(string::npos == word.find_first_of("qtypdfghjkl")) {
                vec.push_back(word);
            }
        }
    }

    for(auto iter:vec) {
        cout << iter << endl;
    }
}
