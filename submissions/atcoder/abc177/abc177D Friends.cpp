/*
    Author    : MishkatIT
    Created   : Friday 26-09-2025 20:54:14
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
    vector<int> adj[n + 5];
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n + 5);
    int cnt = 0;
    function<void(int, int)> dfs = [&](int i, int par) {
        if (vis[i]) return;
        vis[i] = true;
        cnt++;
        for (auto& j : adj[i]) {
            dfs(j, i);
        }
    };
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt = 0;
            dfs(i, -1);
            ans = max(ans, cnt);
        }
    }
    cout << ans << '\n';
    return 0;
}