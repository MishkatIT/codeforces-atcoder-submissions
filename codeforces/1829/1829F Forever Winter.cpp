/*
    author    : MishkatIT
    created   : Sunday 2023-05-07-18.41.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

vector<int> adj[210];

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < 210; i++)
            adj[i].clear();
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int x = 0, y = 0;
        for (int i = 1; i <= n; i++)
        {
            set<int> s;
            for(auto& x: adj[i])
            {
                s.insert(adj[x].size());
            }
            if(s.size() == 1)
            {
                x = adj[i].size();
                y = *s.begin();
                if(x > 1 && --y > 1)break;
            }
        }
        cout << x << ' ' << y << '\n';
    }
    return 0;
}
