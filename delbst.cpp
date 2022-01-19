#include "bits/stdc++.h"
using namespace std;

struct node {
    
    int data;
    struct  node*left;
    struct  node*right;

    
//  initialize as null;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
// In deletion there are 3 cases:
// 1)Node in a leaf-Del directly
// 2)Node has 1 child-Replace node with child and delete all the node
// 3)Node has 2 children -In this case node has 2 steps:
// a>Find inorder successor
// b>Replace then swap then del the node

// CASE1:
Node*Delete In BST(Node*root,int key)
if (key<root->data)
{
    root->lefy=DeleteInBST(root->left,Key)
}
else if (Key>root->data)
{
    root->right=deleteInBST(root->right,key)
}

// CASE-2
else if (root->left==NULL)
    {
        Node*temp=root->right;
        free(root);
        return temp;
    }
    
}

else if (root->right==NULL)
{
    Node*temp=root->left;
        free(root);
        return temp;
}

// CASE-3
Node*temp=Inordersucc(root->right);
root->data=temp->data;
root->right=deleteInBST(root->right,temp key)
    }
    return root;


Node*inordersucc(Node*root)
{
    Node*current=root;
    while(curr&&curr->left!=NULL)
    curr=curr->left;
    return curr;
}

Void inorder(Node*root)
{
    if (root==NULL)
    {
        return;
    }
       }

Inorder (root->left);
cout>>root->data;
inorder(root->right);
cout<<root->right;

int main()
{
    inorder (root);
    root=DeleteInBST(root,3)
    inorder(root);
    cout<<" "<<\n;

}