// Date: 15-12-2024 at 20:58 BST
// Link: https://codeforces.com/contest/2044/problem/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'p')
            cout << "q";
        else if (s[i] == 'q')
            cout << "p";
        else
            cout << s[i];
    }
    cout << nl;
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