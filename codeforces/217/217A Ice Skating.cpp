/*
    author    : MishkatIT
    created   : Friday 2023-12-15-19.45.47
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1010;
const ll inf    = 1e9;
const ll linf   = 1e18;

int n;
int g[N][2];

bool vis[N];

void dfs(int x)
{
    vis[x] = true;
    for (int i = 0; i < n; i++) {
        if (!vis[i] && (g[i][0] == g[x][0] || g[i][1] == g[x][1])) {
            dfs(i);
        }
    }
}

int main()
{
    fio;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> g[i][0] >> g[i][1];
    }
    int con = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            con++;
            dfs(i);
        }
    }
    cout << --con;
    return 0;
}


