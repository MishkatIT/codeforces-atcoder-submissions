/*
    Author    : MishkatIT
    Created   : Friday 26-09-2025 20:48:58
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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    ll ans = 0;
    map<int, int> mp;
    mp[0] = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        ans += mp[sum % m];
        mp[sum % m]++;
    }
    cout << ans << '\n';

    return 0;
}