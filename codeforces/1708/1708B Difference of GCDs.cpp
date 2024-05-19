/*
    Author    : MishkatIT
    Created   : Sunday 19-05-2024 22:04:14
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<int> ans(n);
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            ll x = (l + i - 1) / i * i;
            if (x > r) {
                ok = false;
                break;
            } else {
                ans[i - 1] = x;
            }
        }
        if (!ok) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " \n"[i == n - 1];
            }
        }
    }
    return 0;
}