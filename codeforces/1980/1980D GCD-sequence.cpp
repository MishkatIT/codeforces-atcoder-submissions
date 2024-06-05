/*
    Author    : MishkatIT
    Created   : Wednesday 05-06-2024 13:34:19
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
        int n;
        cin >> n;
        vector<int> v(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        vector<int> g(n + 5);
        for (int i = 1; i < n; i++) {
            g[i] = __gcd(v[i], v[i + 1]);
        }
        g[n] = inf;
        vector<bool> pre(n + 5, true), suf(n + 5, true);
        for (int i = 1; i < n; i++) {
            pre[i] = g[i] >= g[i - 1];
            pre[i] = pre[i] & pre[i - 1];
        }

        for (int i = n - 1; i > 0; i--) {
            suf[i] = g[i] <= g[i + 1];
            suf[i] = suf[i] & suf[i + 1];
        }

        bool ok = false;
        for (int i = 1; i <= n; i++) {
            bool temp = true;
            if (i < n) {
                temp &= suf[i + 1];
            }
            if (i - 2 > 0) {
                temp &= pre[i - 2];
            }
            if (i == 1 || i == n) {
                if (temp) {
                    ok = true;
                    break;
                }
            } else {
                int curGcd = __gcd(v[i - 1], v[i + 1]);
                if (i - 2 > 0) {
                    temp &= (g[i - 2] <= curGcd);
                }
                if (i + 1 <= n) {
                    temp &= (curGcd <= g[i + 1]);
                }
            }
            if (temp) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}