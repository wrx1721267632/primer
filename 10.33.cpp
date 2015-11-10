/*************************************************************************
	> File Name: 10.33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月09日 星期一 21时39分23秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<fstream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
    if (argc != 4) 
        return -1;
    ifstream ifs(argv[1]);
    ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

    istream_iterator<int> in(ifs), in_eof;
    ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");
    
    int i;
    while (in != in_eof) {
        i = *in++;
        if ( i%2 == 0 ) {
            *out_even++ = i;
        } else {
            *out_odd++ = i;
        }
    }
    return 0;
}
