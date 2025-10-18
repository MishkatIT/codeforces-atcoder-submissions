/*
    Author    : MishkatIT
    Created   : Saturday 18-10-2025 18:32:18
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

    ll s, a, b, x;
    cin >> s >> a >> b >> x;
    ll ans = 0;
    while (x > 0) {
        if (a <= x) {
            x -= a;
            ans += s * a;
        } else {
            ans += s * x;
            x = 0;
        }
        x -= b;
    }
    cout << ans;

    return 0;
}