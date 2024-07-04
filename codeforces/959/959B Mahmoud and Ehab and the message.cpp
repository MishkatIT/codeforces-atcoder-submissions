/*
    Author    : MishkatIT
    Created   : Friday 05-07-2024 00:34:31
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, m;
    cin >> n >> k >> m;
    vector<string> lan(n);
    for (auto& i : lan) cin >> i;
    vector<int> cost(n);
    for (auto& i : cost) cin >> i;
    for (int i = 0; i < k; i++) {
        int len;
        cin >> len;
        vector<int> temp(len);
        for (auto& val : temp) {
            cin >> val;
        }
        int mn = inf;
        for (auto& x : temp) {
            mn = min(mn, cost[x - 1]);
        }
        for (auto& x : temp) {
            cost[x - 1] = mn;
        }
    }
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        mp[lan[i]] = cost[i];
    }
    ll ans = 0;
    for (int i = 0; i < m; i++) {
        string x;
        cin >> x;
        ans += mp[x];
    }
    cout << ans << '\n';
    return 0;
}