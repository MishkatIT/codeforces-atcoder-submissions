/*
    Author    : MishkatIT
    Created   : Tuesday 23-04-2024 01:25:53
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        debug(mp)
        int ans = 0;
        for (auto &i : mp)
        {
            ans += i.second / 3;
        }
        cout << ans << '\n';
        debug(ans)
    }
    return 0;
}