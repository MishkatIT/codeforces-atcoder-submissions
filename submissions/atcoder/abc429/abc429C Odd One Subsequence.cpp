/*
    Author    : MishkatIT
    Created   : Saturday 25-10-2025 18:04:08
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    map<int, int> mp;
    for (auto& i : v) mp[i]++;
    ll ans = 0;
    for (auto& [a, b] : mp) {
        ll x = b;
        ll y = n - b;
        ll temp = x * (x - 1) / 2;
        ans += temp * y;
    }
    cout << ans << '\n';
    return 0;
}