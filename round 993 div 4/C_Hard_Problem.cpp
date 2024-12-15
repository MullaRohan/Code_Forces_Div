// Date: 15-12-2024 at 21:08 BST
// Link: https://codeforces.com/contest/2044/problem/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    ll sit, a, b, c;
    cin >> sit >> a >> b >> c;
    ll total_sit = 0, a_space = 0, b_space = 0;
    if (a <= sit)
    {
        total_sit += a;
        a_space = sit - a;
    }
    else if (a > sit)
    {
        total_sit += sit;
    }
    if (b <= sit)
    {
        total_sit += b;
        b_space = sit - b;
    }
    else if (b > sit)
        total_sit += sit;
    ll tmp = a_space + b_space;
    if (tmp >= c)
        total_sit += c;
    else
        total_sit += tmp;
    cout << total_sit << nl;
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