/*
    author    : MishkatIT
    created   : Thursday 2023-12-21-17.53.22
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e4 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> adj[N];
vector<int> color;
int ans = 0;
void dfs(int node, int par = -1)
{
    for (auto& i : adj[node]) {
        if (i != par) {
            if (color[i] != color[node]) {
                ans++;
            }
            dfs(i, node);
        }
    }
}

int main()
{
    fio;
    int n;
    cin >> n;
    for (int u = 2; u <= n; u++) {
        int v;
        cin >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    color.assign(n + 5, 0);
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
    }

    dfs(1, 1);
    cout << ans + 1;
    return 0;
}

