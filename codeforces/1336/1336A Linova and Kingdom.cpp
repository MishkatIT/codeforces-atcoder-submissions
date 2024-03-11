#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> adj[N];
vector<int> all;
int dfs(int i, int parent, int depth = 0)
{
    int child = 0;
    for (auto& j : adj[i]) {
        if (j != parent) {
            child += dfs(j, i, depth + 1) + 1;
        }
    }
    all.push_back(depth - child);
    return child;
}

int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);
    sort(all.rbegin(), all.rend());
    ll h = 0;
    for (int i = 0; i < k; i++) {
        h += all[i];
    }
    cout << h;
    return 0;
}
