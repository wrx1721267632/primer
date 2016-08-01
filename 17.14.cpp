/*************************************************************************
	> File Name: 17.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月27日 星期一 11时59分37秒
 ************************************************************************/

#include<iostream>
#include<regex>
using namespace std;

int main()
{
    regex r("[[:alnum:]]+\\.(cpp|cxx|cc)$", regex::icase);
    cmatch results;
    if (regex_search("myfile.cc",results,r))
        cout << results.str() << endl;
    return 0;
}
