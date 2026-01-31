/*
    Author    : MishkatIT
    Created   : Saturday 31-01-2026 18:39:36
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll ans = 0;
    
    auto fun = [&]() {
        for (int i = 0; i + 1 < n; i++) {
            if (v[i] > v[i + 1]) {
                ans += v[i] - v[i + 1] - 1;
                v[i] = v[i + 1] + 1;
            }
            if (v[i] < v[i + 1]) {
                ans += v[i + 1] - v[i] - 1;
                v[i + 1] = v[i] + 1;
            }
        }
    };

    fun();
    reverse(v.begin(), v.end());
    fun();
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}