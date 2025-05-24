/*
    Author    : MishkatIT
    Created   : Saturday 24-05-2025 18:28:50
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

    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    
    while (q--) {
        ll k; cin >> k;

        auto ok = [&](ll x) {
            ll cnt = upper_bound(v.begin(), v.end(), x) - v.begin();
            return x - cnt >= k;
        };

        ll low = 1, high = 2e18;
        ll ans;
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