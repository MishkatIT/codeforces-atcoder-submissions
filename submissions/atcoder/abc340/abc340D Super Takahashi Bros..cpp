/*
    author    : MishkatIT
    created   : Thursday 2024-02-15-19.57.15
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<vector<pair<int, int>>> adj;
vector<ll> dist;


void dijkstra()
{
    set<pair<ll, int>> s;
    s.insert({0, 1});
    dist[1] = 0;
    while(!s.empty()) {
        int u = s.begin() -> second;
        s.erase(s.begin());
        for (auto& i : adj[u]) {
            int v = i.first;
            ll w = i.second;
            if (dist[u] + w < dist[v]) {
                s.erase({dist[v], v});
                dist[v] = dist[u] + w;
                s.insert({dist[v], v});
            }
        }
    }
}

signed main()
{
    fio;
    int n;
    cin >> n;
    adj.resize(n + 5);
    dist.resize(n + 5, linf);
    for (int i = 1; i < n; i++) {
        int a, b, x;
        cin >> a >> b >> x;
        adj[i].push_back({i + 1, a});
        adj[i].push_back({x, b});
    }
    dijkstra();
    cout << dist[n] << '\n';
    return 0;
}


