/*
    Author    : MishkatIT
    Created   : Saturday 04-05-2024 01:09:18
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
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int dp[N][10];

void pre() {
    for (int i = 0; i < 10; i++) {
        dp[0][i] = 1;
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 9) {
                dp[i][j] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
            } else {
                 dp[i][j] = dp[i - 1][j + 1];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre();

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        ll ans = 0;
        while(n) {
            ans += dp[m][n % 10];
            ans %= mod;
            n /= 10;
        }
        cout << ans << '\n';
    }
    return 0;
}