/*
    Author    : MishkatIT
    Created   : Saturday 08-02-2025 18:02:08
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!mp[i]) ans.push_back(i);
    }
    int sz = ans.size();
    cout << sz << '\n';
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}