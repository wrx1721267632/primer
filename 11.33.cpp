/*************************************************************************
	> File Name: 11.33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 17时22分39秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

map<string, string> BulidMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;

    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) 
            trans_map[key] = value.substr(1);
    }

    return trans_map;
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = BulidMap(map_file);
    string text;
    while (getline(input, text)) {
        istringstream stream(text);
        string word;
        while (stream >> word) {
            auto map_it = trans_map.find(word);
            if (map_it != trans_map.end()) {
                cout << map_it->second << " ";
            } else {
                cout << word << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    ifstream map_file("map_file"), input("input");
    word_transform(map_file, input);
    return 0;
}
