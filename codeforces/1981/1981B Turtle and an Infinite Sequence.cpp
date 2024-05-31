/*
    Author    : MishkatIT
    Created   : Friday 31-05-2024 16:45:07
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

ll rangeOr(ll l, ll r) {
    ll res = 0;
    while (l != r) {
        l >>= 1;
        r >>= 1;
        res = (res << 1) | 1;
    }
    return (l << (__builtin_popcountll(res))) | res;
}
 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, m;
        cin >> n >> m;
        ll ans = n;
        ll x = log2(n);
        x++;
        ll mxans = (1LL << x);
        ll l = max(0LL, n - m), r = n + m;
        cout << rangeOr(l, r) << '\n';
    }
    return 0;
}