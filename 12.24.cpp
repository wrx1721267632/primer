/*************************************************************************
	> File Name: 12.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月03日 星期三 10时41分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    std::cout << "How long do you want the string?     ";
    int size{ 0 };
    std::cin >> size;
    char *input = new char[size+1]();
    std::cin.ignore();
    std::cout << "input the string: ";
    std::cin.get(input, size+1);
    std::cout << input << endl;
    delete [] input;
}
