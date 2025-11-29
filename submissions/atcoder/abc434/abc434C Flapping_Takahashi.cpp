/*
    Author    : MishkatIT
    Created   : Saturday 29-11-2025 18:14:16
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {

        int n, h;
        cin >> n >> h;
        int last = 0;
        int mn = h, mx = h;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int t, l, u;
            cin >> t >> l >> u;
            int du = t - last;
            int canMn = mn - du; canMn = max(0, canMn);
            int canMx = mx + du;
            if (u < canMn || l > canMx) {
                ok = false;
            } 
            // debug(canMn); debug(canMx);
            if (ok) {
                mn = max(canMn, l);
                mx = min(canMx, u);
            }
            // debug(i); debug(ok);
            last = t;
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}