/*
    author    : MishkatIT
    created   : Monday 2023-11-27-18.20.35
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> adj[N];
vector<bool> vis(N);

void dfs(int node)
{
    vis[node] = true;
    for (auto& i : adj[node]) {
        if (!vis[i]) dfs(i);
    }
}

int main()
{
    fio;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int connected = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            connected++;
            dfs(i);
        }
    }
    cout << (1LL << (n - connected));
    return 0;
}


