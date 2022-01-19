// // // Heaps in STL:
// // 1]MAX HEAP: priority-queue <int,vector<int>>
// //                                  container...

// // 2]MIN HEAP:priority-queue<int,vector<int>>         
// //                          greater<int>>

// time complexity in heap stl:
// push=O(log n)
// pop= O (log n)
// top=O(1)
// size=O(1)

// code:
#include <algorithm>
#include <string>

// #define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep (i, a, b)       for (int i = a; i < b; i++)

#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{

    // for max heap 
    priority_queue<int,vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    // for min heap 
    priority_queue<int,vector<int> , greater <int>> pqm;
    pqm.push(1);
    pqm.push(2);
    pqm.push(3);

    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;


}