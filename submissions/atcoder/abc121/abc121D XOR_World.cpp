/*
    Author    : MishkatIT
    Created   : Saturday 24-05-2025 19:40:25
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

ll xorFromZeroToN(ll n) {
    int x = n % 4;
    if (x == 0) return n;
    if (x == 1) return 1;
    if (x == 2) return n + 1;
    return 0;
}

ll rangeXor(ll l, ll r) {
    return xorFromZeroToN(r) ^ xorFromZeroToN(l - 1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    cout << rangeXor(a, b);
    return 0;
}