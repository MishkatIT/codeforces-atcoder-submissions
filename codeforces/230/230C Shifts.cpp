/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 20:07:41
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    bool ok = true;
    for (auto& i : v) {
        if (count(i.begin(), i.end(), '0') == m) {
            ok = false;
        }
    }
    if (!ok) {
        cout << -1 << '\n';
        return 0;
    }
    vector<vector<int>> dp(n, vector<int>(m, inf));
    for (int i = 0; i < n; i++) {
        int x = 1;
        for (int j = m - 1; j >= 0; j--) {
            if (v[i][j] == '1') break;
            x++;
        }
        dp[i][0] = x;
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '1') {
                dp[i][j] = 0;
                continue;
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int x = 1;
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '1') break;
            x++;
        }
        dp[i][m - 1] = min(dp[i][m - 1], x);
        for (int j = m - 1; j >= 0; j--) {
            if (v[i][j] == '1') {
                dp[i][j] = 0;
                continue;
            }
            if (j < m - 1) {
                dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
            }
        }
    }
    int mn = inf;
    // debug(dp);
    // debug(v);
    for (int j = 0; j < m; j++) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            temp += dp[i][j];
        }
        mn = min(mn, temp);
    }
    cout << mn << '\n';
    return 0;
}