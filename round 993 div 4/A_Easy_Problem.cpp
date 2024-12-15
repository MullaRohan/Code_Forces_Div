// Date: 15-12-2024 at 20:52 BST
// Link: https://codeforces.com/contest/2044/problem/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    if (n & 1)
        cout << n - 2 << nl;
    else
        cout << n - 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}