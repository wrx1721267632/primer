/*************************************************************************
	> File Name: 13.message_folder.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 21时05分36秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<string>
using namespace std;

class Folder;

class Message {
    friend class Folder;
    friend void swap(Message &, Message &);
    friend void swap(Folder &, Folder &);
public:
    explicit Message (const string &str = " "):Str(str) {  }
    Message(const Message &rhs):Str(rhs.Str), folders(rhs.folders) {
        add_to_Folders(rhs);
    }
    Message& operator=(const Message &rhs) {
        remove_from_Folders();
        Str = rhs.Str;
        folders = rhs.folders;
        add_to_Folders(rhs);
        return *this;
    }
    ~Message(){ remove_from_Folders(); }
    
    void save(Folder &f) {
        folders.insert(&f);
        f.addMsg(this);
    }
    void remove(Folder &f) {
        folders.erase(&f);
        f.remMsg(this);
    }
private:
    string Str;
    set<Folder*> folders;
    void add_to_Folders(const Message&rhs)
    {
        for (auto item : rhs.folders) {
            item->addMsg(this);
        }
    }
    void remove_from_Folders()
    {
        for (auto f : folders) {
            f->remMsg(this);
        }
    }

    void addFold(Folder *f) { folders.insert(f); }
    void remFold(Folder *f) { folders.erase(f); }
};

void swap(Message &lhs, Message &rhs) 
{
    for(auto f : lhs.folders) {
        f->remMsg(&lhs);
    }
    for(auto f : rhs.folders) {
        f->remMsg(&rhs);
    }
    swap(lhs.folders, rhs.folders);
    swap(lhs.Str, rhs.Str);
    for(auto f : lhs.folders) {
        f->addMsg(&lhs);
    }
    for(auto f : rhs.folders) {
        f->addMsg(&rhs);
    }
}

class Folder{
    friend class Message;
    friend void swap(Message &, Message &);
    friend void swap(Folder &, Folder &);
public:
    Folder() = default;
    Folder(const Folder &fold):msg(fold.msg) {
        add_to_Messages(fold);
    }
    Folder& operator=(const Folder &fold) {
        remove_from_Messages();
        msg = fold.msg;
        add_to_Messages(fold);
        return *this;
    }
    ~Folder()
    {
        remove_from_Messages();
    }
private:
    set<Message*> msg;
    void add_to_Messages(const Folder &rhs)
    {
        for (auto m : rhs.msg) {
            m->addFold(this);
        }
    }
    void remove_from_Messages()
    {
        for( auto m : msg ) {
            m->remFold(this);
        }
    }

    void addMsg(Message *m) { msg.insert(m); }
    void remMsg(Message *m) { msg.erase(m); }

}

void swap(Folder &lhs, Folder &rhs) 
{
    for ( auto m : lhs.msg ) {
        m->remFold(lhs);
    }
    for ( auto m : rhs.msg ) {
        m->remFold(rhs);
    }
    swap(lhs.msg, rhs.msg);
    for (auto : lhs.msg) {
        m->addFold(lhs);
    }
    for (auto : rhs.msg) {
        m->addFold(rhs);
    }
}
