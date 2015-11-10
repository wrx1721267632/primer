/*************************************************************************
	> File Name: 10.29.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 15时40分23秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::string;

int main()
{
    std::ifstream ifs("txt");
    std::istream_iterator<string> in(ifs), eof;
    std::vector<string> vec;
    std::copy(in, eof, back_inserter(vec));
    
    // output
    std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<string>(std::cout, "\n"));
}
