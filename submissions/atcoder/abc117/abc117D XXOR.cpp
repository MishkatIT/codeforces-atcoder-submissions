/*
    Author    : MishkatIT
    Created   : Saturday 24-05-2025 19:24:11
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

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool ok = false;
    ll x = 0;
    for (ll i = 44; i >= 0; i--) {
        int one = 0;
        for (auto& j : v) {
            if ((1LL << i) & j) one++;
        }
        int zero = n - one;
        if (zero > one) {
            if (ok || ((1LL << i) & k)) {
                x |= (1LL << i);
            }
        } else {
            if ((1LL << i) & k) ok = true;
        }
    }
    ll ans = 0;
    for (auto& i : v) {
        ans += (i ^ x);
    }
    cout << ans;
    return 0;
}