/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 18:03:06
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

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto& i : v) cin >> i;
    vector<vector<int>> x(n, vector<int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }
    bool ok = true;
    for (int j = 0; j < m; j++) {
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += x[i][j];
        }
        ok &= (sum >= v[j]);
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}