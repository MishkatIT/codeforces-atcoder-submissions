/*
    Author    : MishkatIT
    Created   : Saturday 25-01-2025 20:00:08
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
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    int u, d, l, r;
    u = l = inf, d = r = 0;
    bool q = false;
    bool b = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '#') {
                b = true;
                u = min(u, i);
                d = max(u, i);
                l = min(l, j);
                r = max(r, j);
            }
            if (v[i][j] == '?') q = true;
        }
    }
    bool ok = true;
    if (b) {
        for (int i = u; i <= d; i++) {
            for (int j = l; j <= r; j++) {
                if (v[i][j] == '.') ok = false;
            }
        }
    } else if (!q) ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}