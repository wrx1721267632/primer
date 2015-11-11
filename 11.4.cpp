/*************************************************************************
	> File Name: 11.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 17时34分49秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
    map<string, size_t> word_count;
    string word;

    while ( cin >> word ) {
        for (auto &iter : word) {
            iter = tolower(iter);
        }
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        ++word_count[word];
    }
    for (auto iter : word_count) {
        cout << iter.first << " occurs " << iter.second << ((iter.second>1)? " times" : " time") << endl;
    }
    return 0;
}
