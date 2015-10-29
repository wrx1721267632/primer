/*************************************************************************
	> File Name: 7.52.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月17日 星期六 15时17分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct Sales_data
{
    std::string bookNO;
    unsigned units_sold;
    double revenue;
};

int main() 
{
    Sales_data item = {"978-0590353403", 25, 15.99};

    cout << "\nbookNo: " << item.bookNO << "\nunists_sold: " << item.units_sold << "\nrevenue: " << item.revenue << endl;

    return 0;
}
