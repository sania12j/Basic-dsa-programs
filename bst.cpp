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

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;

        void inorder(node * root)
    {
        if (root == NULL)
        {
            return;
        }
        inoder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    };
}
int main()
{

    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    return 0;
}
