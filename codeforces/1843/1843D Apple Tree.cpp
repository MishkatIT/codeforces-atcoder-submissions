/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-21.53.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

void dfs(int u, int x, vector<int>& Lf, vector<vector<int>>& adj)
{
    if(u != 0 && adj[u].size() == 1)
      Lf[u] = 1;
    for (auto& v : adj[u])
    {
        if (v != x)
        {
            dfs(v, u, Lf, adj);
            Lf[u] += Lf[v];
        }
    }
//    if (Lf[u] == 0) Lf[u] = 1;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> Lf(n, 0);
        dfs(0, -1, Lf, adj);
        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            cout << Lf[u] * 1LL * Lf[v] << '\n';
        }
    }
    return 0;
}

