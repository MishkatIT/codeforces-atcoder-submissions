/*
    Author    : MishkatIT
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
        ll h;
        int n;
        cin >> h >> n;
        vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        auto ok = [&](ll mid) {
            ll dam = 0;
            // debug(mid);
            for (int i = 0; i < n; i++) {
                ll x = (mid + c[i] - 1) / c[i];
                dam += a[i] * x;
                if (dam >= h) return true;
                // debug(dam);
            }
            return dam >= h;
        };

        ll low = 1, high = 1e12;
        ll ans = 0;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (ok(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << '\n'; 
    }

    return 0;
}

// overflow?, h = 1e12