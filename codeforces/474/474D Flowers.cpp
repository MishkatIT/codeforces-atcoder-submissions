/*
    Author    : MishkatIT
    Created   : Saturday 08-06-2024 23:18:04
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
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int tc, k;

int dp[N];
void pre() {
    dp[0] = 1;
    for (int i = 1; i < N; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i - k >= 0) {
            dp[i] += dp[i - k];
        }
        dp[i] %= mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> tc >> k;
    pre();
    while (tc--) {
        int l, r;
        cin >> l >> r;
        cout << (dp[r] - dp[l - 1] + mod) % mod << '\n';
    }
    return 0;
}