
// Q. add all numbers till n:

// other q related to recursion are:
// factorial,fibonacci,power etc,

#include <iostream>
using namespace std;

int sum (int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = Sum(n - 1);
    return n + prevSum;
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n) << endl;
}