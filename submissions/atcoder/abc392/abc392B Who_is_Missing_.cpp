/*
    Author    : MishkatIT
    Created   : Sunday 18-05-2025 18:22:18
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> v(m); // m  means number of elements. 
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    map<int, bool> seen; 
    for (int i = 0; i < m; i++) {
        seen[v[i]] = true;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!seen[i]) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}