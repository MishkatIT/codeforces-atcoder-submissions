/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 19:56:31
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

vector<vector<int>> adj;
vector<int> color;

bool dfs(int i, int now = 0) {
    color[i] = now;
    for (auto &j : adj[i]) {
        if (color[j] == -1) {
            if (!dfs(j, now ^ 1)) {
                return false;
            }
        } else if (color[j] == now) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        adj.clear();
        color.clear();
        adj.resize(n + 5);
        color.resize(n + 5, -1);

        vector<int> degree(n + 5);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int u, v;
            cin >> u >> v;
            ok &= (u != v);
            degree[u]++, degree[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 1; i <= n; i++) {
            ok &= (degree[i] <= 2);
        }

        for (int i = 1; i <= n; i++) {
            if (color[i] == -1) {
                ok &= dfs(i);
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}