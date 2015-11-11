/*************************************************************************
	> File Name: 11.3or4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月10日 星期二 17时04分43秒
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
    set<string> exclude = {"the","but","or","and","an","a"};
    string str;

    while ( cin >> str ) {
        if( exclude.find(str) == exclude.end() )
            ++word_count[str];
    }
    for (auto iter : word_count) {
        cout << iter.first << " occurs " << iter.second << ((iter.second>1)? " times" : " time") << endl;
    }

    return 0;
}
