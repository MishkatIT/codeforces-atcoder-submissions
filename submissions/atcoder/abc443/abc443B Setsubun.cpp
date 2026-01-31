/*
    Author    : MishkatIT
    Created   : Saturday 31-01-2026 18:03:33
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

#define int long long

void Solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int sum = n++;
    while (sum < k) {
        sum += n;
        n++;
        ans++;
    }
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solve();
    return 0;
}