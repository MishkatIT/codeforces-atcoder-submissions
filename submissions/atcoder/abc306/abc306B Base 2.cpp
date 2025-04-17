/*
    Author    : MishkatIT
    Created   : Friday 18-04-2025 01:48:55
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 64;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    unsigned long long ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (v[i] * (1LL << i));
    }
    cout << ans << '\n';
    return 0;
}