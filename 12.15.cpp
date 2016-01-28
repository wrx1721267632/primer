/*************************************************************************
	> File Name: 12.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月15日 星期日 17时20分12秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<memory>
using namespace std;

struct connection {
    string ip;
    int port;
    connection(string ip_, int port_): ip(ip_), port(port_) {}
};

struct destination {
    string ip;
    int port;
    destination(string ip_, int port_): ip(ip_), port(port_) {}
};

connection connect(destination *pDest)
{
    shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    cout << "creating connection(" << pConn.use_count() << ")" << endl;
    return *pConn;
}

void disconnect(connection pConn)
{
    cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << endl;
}

void f(destination &d)
{
    connection conn = connect(&d);
    shared_ptr<connection> p(&conn, [](connection *p){ disconnect(*p); });
    cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main()
{
    destination dest("202.108.176.67", 3316);
    f(dest);
}
