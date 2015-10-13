/*************************************************************************
	> File Name: 1_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月13日 星期二 16时22分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

-int main()
-{
-    int v1, v2, m;
-    cout << "please input tow number ";
-    cin >> v1 >> v2;
-    if (v1 > v2){
-        m = v1;
-        v1 = v2;
-        v2 = m;
-    }
-    while (v1 != v2) {
-        cout << " " << v1 << " ";
-        v1++;
-    }
-    cout << " " << v2 << endl;
-    return 0;
-}
