
// Q.Spiral traversal matrix:-

#include <iostream>
#include <vector>
using namespace std;
vector<int>
    (<vector>
    <int> &a)
{
    int T, B, L, R, div;
    T = 0;
    B = A.Size() - 1;
    l = 0;
    R = A[O].Size() - 1;
    dir = 0;
    int i;
    vector<int> ans;
    while (T <= B && L <= R)
    {
        if (dir == 0)
        {
            for (i = l; i <= R; i++)
                ans.push_back(A[T][i]);
            T++;
        }
        Else if (dir == 1)
        {
            for (i = T; i <= B; i++)
                ans.push_back(A[i][R]);
            R--;
        }
        Else if (dir == 1)
        {
            for (i = T; i <= B; i++)
                ans.push_back(A[i][R]);
            R--;
        }
        Else if (dir == 2)
        {
            for (i = R; i >= L; i--)
                ans.push_back(A[B][i]);
            B--;
        }
        Else if (dir == 3)
        {
            for (i = B; i >= T; i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir = (dir + 1) % 4;
    }
    return ans;
}