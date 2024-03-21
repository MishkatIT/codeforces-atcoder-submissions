/*
    author    : MishkatIT
    created   : Thursday 2024-03-21-01.08.20
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

vector<set<int>> adj;
vector<bool> vis;
int circle = 0;
bool dfs(int i, int parent = -1)
{
    vis[i] = true;
    for (auto& j : adj[i]) {
        if (!vis[j]) {
            dfs(j, i);
        } else if (j != parent) {
            return true;
        }
    }
    return false;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        adj.clear();
        vis.clear();
        adj.resize(n + 5);
        vis.resize(n + 5);
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            adj[i].insert(x);
            adj[x].insert(i);
        }
        int connected = 0;
        circle = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                circle += dfs(i);
                connected++;
            }
        }
        cout << circle + (connected - circle > 0) << ' ' << connected << '\n';
    }
    return 0;
}


