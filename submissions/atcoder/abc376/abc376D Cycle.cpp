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



vector<int> adj[N];
int dist[N], par[N];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    
    fill(dist, dist + N, inf);
    fill(par, par + N, -1);
    
    queue<int> q;
    dist[1] = 0;
    q.push(1);
    int mnCycl = inf;
    bool ok = false;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto& v : adj[u]) {
            if (dist[v] == inf) {
                dist[v] = dist[u] + 1;
                par[v] = u;
                q.push(v);
            } else if (par[u] != v && v == 1) {
                mnCycl = dist[u] + 1;
                ok = true;break;
            }
        }
        if (ok) break;
    }
    // debug(q);
    if (mnCycl == inf) {
        cout << -1 << '\n';
    } else {
        cout << mnCycl << '\n';
    }
    return 0;
}
