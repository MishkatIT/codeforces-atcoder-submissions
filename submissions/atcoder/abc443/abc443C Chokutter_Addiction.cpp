/*
    Author    : MishkatIT
    Created   : Saturday 31-01-2026 18:15:32
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

void Solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    int cnt = 0;
    int cur = 0;
    for (auto& i : v) {
        if (i >= cur) {
            cur = i + 100;
            cnt++;
        }
    }
    ll ans = k - cnt * 100;
    if (cur >= k) ans += (cur - k);
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solve();
    return 0;
}