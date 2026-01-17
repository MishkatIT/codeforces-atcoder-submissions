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
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<array<int, 2>> adj[n + 5];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    vector<unordered_map<int, bool>> dp(n + 5);
    int ans = inf;
    function<void(int, int)> dfs = [&](int u, int x) {
        if (dp[u].count(x)) return;
        dp[u][x] = true;
        if (u == n) ans = min(ans, x);
        for (auto& [v, w] : adj[u]) {
            dfs(v, x ^ w);
        }
    };

    dfs(1, 0);

    cout << (ans == inf ? -1 : ans) << '\n';
    return 0;
}
