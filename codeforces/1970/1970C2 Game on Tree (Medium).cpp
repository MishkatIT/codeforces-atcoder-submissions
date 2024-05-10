/*
    Author    : MishkatIT
    Created   : Sunday 05-05-2024 20:43:04
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

vector<int> adj[N];
vector<int> x(N);

void dfs(int i, int parent) {
    for (auto& j : adj[i]) {
        if (j != parent) {
            dfs(j, i);
            if (x[j] == 0) x[i] = 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cin >> start;
    dfs(start, -1);
    if (x[start]) {
        cout << "Ron";
    } else {
        cout << "Hermione";
    }
    return 0;
}