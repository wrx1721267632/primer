/*************************************************************************
	> File Name: 13.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月29日 星期一 17时56分14秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class TreeNode {
public:
    TreeNode():value(string()), count(new int(1)), left(nullptr), right(nullptr) {  }
    TreeNode(const TreeNode &rhs):value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; }
    TreeNode& operator=(const TreeNode &rhs) 
    {
        ++*rhs.count;
        if (--*count == 0) {
            if (left) {
                delete left;
                left = nullptr;
            }
            if (right) {
                delete right;
                right = nullptr;
            }
            delete count;
        }
        value = rhs.value;
        count = rhs.conut;
        left = rhs.left;
        right = rhs.right;
        return *this;
    }
    ~TreeNode() {
        if(--*count == 0) {
            if(left) {
                delete left;
                left = nullptr;
            }
            if(right) {
                delete right;
                right = nullptr;
            }
            delete count;
            count = nullptr;
        }
    }
private:
    string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree {
public:
    BinStrTree():root(new TreeNode()) {  }
    BinStrTree(const TreeNode &bst):root(new TreeNode(*bst.root)) {  }
    BinStrTree& operator=(const BinStrTree &bst) 
    {
        TreeNode *new_root = new TreeNode(*bst.root);
        delete root;
        root = new_root;
        return *this;
    }
    ~BinStrTree() { delete root; }
private:
    TreeNode *root;
};
