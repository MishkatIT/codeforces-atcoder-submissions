/*
    author    : MishkatIT
    created   : Thursday 2024-02-15-01.02.24
*/

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

vector<vector<int>> adj;
vector<bool> vis, pathVis;
bool cycle = false;

void dfs(int i)
{
    vis[i] = true;
    pathVis[i] = true;
    for (auto& j : adj[i]) {
        if (!vis[j]) {
            dfs(j);
        } else {
            if (pathVis[j]) {
                cycle = true;
                return;
            }
        }
    }
    pathVis[i] = false;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Clearing vectors for each test case
        adj.clear();
        vis.clear();
        pathVis.clear();
        cycle = false;


        vector<vector<int>> v(k, vector<int> (n));
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }

        adj.resize(n + 5);
        vis.resize(n + 5, false);
        pathVis.resize(n + 5, false);
        cycle = false;

        for (int i = 0; i < k; i++) {
            for (int j = 1; j + 1 < n; j++) {
                adj[v[i][j]].push_back(v[i][j + 1]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i);
            }
        }
        cout << (!cycle ? "YES" : "NO") << '\n';
    }
    return 0;
}


