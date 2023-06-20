#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

vector<vector<int>> adj(N);
vector<int> Lf(N, 0);

void dfs(int u, int x)
{
    for (auto& v : adj[u])
    {
        if (v != x)
        {
            dfs(v, u);
            Lf[u] += Lf[v];
        }
    }
    if (Lf[u] == 0) Lf[u] = 1;
}
//#define int long long // wrong place??????? 
signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
            Lf[i] = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);

        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            cout << Lf[u] * Lf[v] << '\n';
        }
    }
    return 0;
}
