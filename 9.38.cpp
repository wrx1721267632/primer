/*************************************************************************
	> File Name: 9.38.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月27日 星期二 21时10分07秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    
    int i=0;
    vec.push_back(i++);
    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    for (; i<24; i++) {
        vec.push_back(i);
    }
    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.reserve(50);
    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    
    for (; i<50; i++) {
        vec.push_back(i);
    }
    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    for (; i<52; i++) {
        vec.push_back(i);
    }
    cout << "ivec: size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
}
