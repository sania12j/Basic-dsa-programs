#include "bits/stdc++.h"
using namespace std;

struct node
{

    int data;
    struct node *left;
    struct node *right;

    //  initialize as null;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    // create root
    struct node *root = new node(30);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    return 0;
}
