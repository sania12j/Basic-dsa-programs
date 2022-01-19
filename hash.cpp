// // why hashing?
// // ans play with element indices.

// how to play:
// 1]traverse the whole array.
// 2]thodi si extra memory ke dam pr elements aur indices ko map kre

// problem:
// storing indices of such large elements cuz arrays's limit is only 10^8(too global)
// solution:
// hashing -converting elements into smaller elements using hash function

// 1234566->4
// 12345675->6
// 12334556->7
//                 h(x)=x%10
//                                     6->4
//                                     5->6
//                                     6->7

// problem in hash functions are:
// 1)Separate chaining- if collision ,create chain values at same key using ll
seach time : O(n)
        load factor = n / b
                                b = no.of keys
                                    n = no.of values to be mapped

//   // 2)Open addressing:if collision do,probing.
//     probing-using a second argument called probe number in the hash function.
//     probe no. depends on key hence given p(k)

//     types of probing:
//     1)linear: P(k)= a *k + b
//     2)quadratic: P(k)=a*k2(square) + b*k +c.

//    ** Double hashing:
//     P(k,x)= k*h2(x) , h2(x) is a secondary hash function.

// // HASHING  IN   STL :-
// 1)Maps:
// insertion:O(log (n))
// accessing: O(log(n))
// implemented using red black trees
// key value: map<int,int>mp;

// 2) Unordered Maps:
// insertion:O(1)   on an avearge
// accessing: O(1)
// implemented using hash table
// key value:unordered_map<int,int>ump;

// CODE:
#include <algorithm>
#include <string>

// #define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep (i, a, b) for (int i = a; i < b; i++)

#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

                                    signed main()
{
    map<int, int> m;

    m[8] = 2;
    cout << m[8] << endl;

    return o;
}
