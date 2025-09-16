
/*
    Author    : MishkatIT
    Created   : Tuesday 16-09-2025 17:47:55
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
    ll ans = 0;
    for (ll i = k; i <= n + 1; i++) {
        ll l = i * (i - 1) / 2;
        ll r = i * n - l;
        ans += (r - l + 1);
        ans %= mod;
    }
    cout << ans << '\n';
    return 0;
}