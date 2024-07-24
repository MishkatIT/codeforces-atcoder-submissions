/*
    Author    : MishkatIT
    Created   : Wednesday 24-07-2024 13:50:24
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        if (n == 1 && m == 1) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j + 1 < m; j++) {
                swap(v[i][j], v[i][j + 1]);
            }
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i + 1 < n; i++) {
                swap(v[i][j], v[i + 1][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << v[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}