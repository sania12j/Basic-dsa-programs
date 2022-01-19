#include <iostream>
using namespace std;

// delete at the nth center any random node
void deletion(node *head, int val)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    // node which we have to delete
    node *todelete = temp->next;

    // chnge n-1th node ka link
    temp->next = temp->next->next;
    delete todelete;
}

// delete front node
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

int main()
{
    deletion(head, 3);
    delete deleteAtHead(head);
    display(head);
}