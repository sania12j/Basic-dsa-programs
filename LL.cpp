#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    node*head=NULL;
    node*second=NULL;
    node*third=NULL;

// allocate nodes in the heap 
head=new node();
second=new node();
third=new node();

// assigning data 
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data-4;
third->next=NULL;

return 0;
        }
