/*************************************************************************
	> File Name: 8.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月20日 星期二 21时06分37秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main()
{
    int i,j=1;
    while(cin >> i){
        cout << j << endl;
        j++;
    }
    cout << cin.rdstate() << endl;
}
