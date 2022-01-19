#include <iostream>
using namespace std;
#define n (20)

class queue
{
    // data members:
    int *arr;
    int front;
    int back;

    // access modifier=public and make constructor:
public:
    queue()
    {
        arr = new int(n);
        front = -1;
        back = -1;
    }

    // operations-push,pop,peek,empty:

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;


        // if there is first element adding in a array:
        if (front == -1)
        {
            front++;
        }
    }

    
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    void peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}
