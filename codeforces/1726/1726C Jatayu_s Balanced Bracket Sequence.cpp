/*
    Author    : MishkatIT
    Created   : Friday 10-05-2024 16:59:29
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int i) {
    vis[i] = true;
    for (auto &j : adj[i]) {
        if (!vis[j]) {
            dfs(j);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {

        adj.clear();
        vis.clear();

        int n;
        cin >> n;
        n *= 2;

        adj.resize(n + 5);
        vis.resize(n + 5);

        string str;
        cin >> str;
        vector<int> stk;
        int last = -1;
        for (int i = 0; i < n; i++) {
            if (str[i] == '(') {
                stk.push_back(i);
                if (last != -1) {
                    adj[last + 1].push_back(i + 1);
                    adj[i + 1].push_back(last + 1);
                    last = -1;
                }
            } else {
                adj[stk.back() + 1].push_back(i + 1);
                adj[i + 1].push_back(stk.back() + 1);
                stk.pop_back();
                last = i;
            }
        }
        int con = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                con++;
                dfs(i);
            }
        }
        cout << con << '\n';
    }
    return 0;
}