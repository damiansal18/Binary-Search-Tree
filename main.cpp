#include "BSTree.h"
#include <iostream>

using namespace std;

int main()
{
    BSTree Tree;

    int array[10] = { 4,2,5,3,12,6,26,81,13,1 };
    for (int i = 0; i < 10; i++)
    {
        Tree.insertNode(array[i]);
    }
    Tree.displaypreorder();
    Tree.displayinorder();
    Tree.displaypostorder();

    Tree.insertNode(6);
    Tree.insertNode(2);

    Tree.search(2);
    Tree.search(60);

    Tree.deleting(2);
    Tree.search(2);
    Tree.deleting(27);
    Tree.deleting(12);

    Tree.displaypreorder();
    Tree.displayinorder();
    Tree.displaypostorder();


    return 0;
}
