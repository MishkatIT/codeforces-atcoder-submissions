/*
    Author    : MishkatIT
    Created   : Friday 24-05-2024 21:49:53
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
vector<bool> vis;

void dfs(int i) {
    vis[i] = true;
    for (auto& j : adj[i]) {
        if (!vis[j]) {
            dfs(j);
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> f(26);
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        for (auto& x : str) {
            f[x - 'a'].push_back(i);
        }
    }
    adj.resize(n + 5);
    vis.resize(n + 5);
    for (int i = 0; i < 26; i++) {
        for (int j = 1; j < f[i].size(); j++) {
            adj[f[i][j]].push_back(f[i][0]);
            adj[f[i][0]].push_back(f[i][j]);
        }
    }

    int con = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            con++;
            dfs(i);
        }
    }
    cout << con << '\n';
    return 0;
}