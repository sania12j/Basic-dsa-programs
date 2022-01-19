#include <iostream>
using namespace std;
#define MAX [100]

Class stack
{
    int top;

public:
    int a[MAX];
}

Stack()
{
    top = -1;
}

bool push(int x);
int pop();
int peek();
bool is Empty();

bool stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = int  x;
        cout << x << "Pushed into stack";
        return true;
    }
}

int stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--] 
        return x;
    }
}

int stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool stack::is empty()
{
    return (top < 0);
}

int main()
{
    class stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << "Popped from stack\n";
    cout << "Elements present in the stack";

    while (!s.is empty())
    {
        cout << s.peek() << "";
        s.pop();
    }
    return 0;
}