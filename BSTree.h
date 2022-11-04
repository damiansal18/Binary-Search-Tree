#include <iostream>

using namespace std;

class BSTree
{
private:
    struct Node {
        int data;
        Node* right;
        Node* left;
    };
    Node* root;

public:
    BSTree();
    void preorder(Node*& nodePtr);
    void displaypreorder();
    void inorder(Node*& nodePtr);
    void displayinorder();
    void postorder(Node*& nodePtr);
    void displaypostorder();
    Node* searchNode(Node*& nodePtr, int key);
    void search(int key);
    void insert(Node*& nodePtr, Node*& newNode);
    void insertNode(int key);
    void deleteNode(Node*& nodePtr, int key);
    void makeDeletion(Node*& nodePtr);
    void deleting(int key);
};