/*
    Author    : MishkatIT
    Created   : Monday 23-12-2024 22:36:31
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

    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<ll> dp(n + 5, linf);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i + j < n) {
                dp[i + j] = min(dp[i + j], dp[i] + abs(v[i] - v[i + j]));
            }
        }
    }
    cout << dp[n - 1] << '\n';
    return 0;
}