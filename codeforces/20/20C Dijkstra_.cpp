/*
    author    : MishkatIT
    created   : Wednesday 2024-02-14-02.44.25
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll inf    = 1e9;
const ll linf   = 1e16;

vector<vector<pair<int, ll>>> adj; // edge, weight
vector<ll> dist;
vector<int> parent;

void dijkstra(int n)
{
    set<pair<int, int>> s;
    s.insert({0, 1});
    dist[1] = 0;
    while (!s.empty()) {
        int u = s.begin() -> second;
        s.erase(s.begin());
        for (auto& x : adj[u]) {
            ll w = x.second;
            int v = x.first;
            if (dist[u] + w < dist[v]) {
                s.erase({dist[v], v});
                dist[v] = dist[u] + w;
                s.insert({dist[v], v});
                parent[v] = u;
            }
        }
    }
}

void printPath(int s, int e) {
    if (s == e) {
        cout << s << ' ';
        return;
    }
    printPath(s, parent[e]);
    cout << e << ' ';
}

signed main()
{
    fio;
    int n, m;
    cin >> n >> m;

    // Resize vectors based on input size
    adj.resize(n + 1);
    parent.resize(n + 1, -1);
    dist.resize(n + 1, linf);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(n);

    // Check if there is a path from 1 to n
    if (dist[n] == linf) {
        cout << -1 << '\n';
    } else {
        printPath(1, n);
    }

    return 0;
}
