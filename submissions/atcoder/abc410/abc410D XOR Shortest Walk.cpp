/*
    Author    : MishkatIT
    Created   : Sunday 15-06-2025 21:33:23
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
const int N = 1e3 + 5;
const int inf = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<array<int, 2>> adj[n + 1];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    vector<vector<int>> dp(n + 1, vector<int>(1024, -1));
    int ans = inf;

    function<void(int, int)> dfs = [&](int i, int x) {
        if (dp[i][x] != -1) return;
        dp[i][x] = x;
        if (i == n) ans = min(ans, x);
        for (auto& [j, w] : adj[i]) {
            dfs(j, x ^ w);
        }
    };

    dfs(1, 0);
    cout << (ans == inf ? -1 : ans) << '\n';
    return 0;
}
