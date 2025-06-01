/*
    Author    : MishkatIT
    Created   : Sunday 01-06-2025 18:57:17
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        str = '#' + str;
        vector<vector<int>> dp(n + 5, vector<int>(3, n));
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++) {
            dp[i][0] = dp[i - 1][0] + (str[i] == '1');
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + (str[i] == '0');
            dp[i][2] = min(dp[i - 1][1], dp[i - 1][2]) + (str[i] == '1');
        }
        cout << min({dp[n][0], dp[n][1], dp[n][2]}) << '\n';
    }
    return 0;
}