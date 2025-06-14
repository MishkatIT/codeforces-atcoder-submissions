/*
    Author    : MishkatIT
    Created   : Saturday 14-06-2025 18:00:29
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
    int k; cin >> k;
    int ans = 0;
    for (auto& i : v) {
        if (k <= i) ans++;
    }
    cout << ans;

    return 0;
}