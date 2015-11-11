/*************************************************************************
	> File Name: 11.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 16时36分39秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    multimap<string, string> authors;
    string author;
    string work;

    while (cin >> author >> work) {
        if (author == "0") 
            break;
        authors.insert({author, work});
    }
    cout << "please input: ";
    cin >> author >> work;
    auto count = authors.count(author);
    auto found = authors.find(author);
    while (count) {
        if (found->second == work) {
            authors.erase(found);
            break;
        }
        ++found;
        --count;
    }

    for (auto iter : authors) {
        cout << iter.first << ": " << iter.second << endl;
    }
    return 0;
}
