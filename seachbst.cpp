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
Node *SearchInBst(Node *root, int key) if (root = NULL)
{
    Return NULL;
}
if (root->data = key)
{
    return root;
}
else if (root->data > key)
{
    return SearchInBst(root->left, key)
}
else
{
    return SearchInBst(root->right, key);
}

int main()
{
    struct node *root = new node(3);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);

        SearchInBst(root,3)==NULL)
        {
            cout << "key don't exist";
            else
            {
                "key exists"
            }
        }
        return 0;
}
}
