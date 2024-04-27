/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 20:53:33
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        if (n == 1) {
            if (a[0][0] == a[0][m - 1]) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
            continue;
        }
        if (m == 1) {
            if (a[0][0] == a[n - 1][0]) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
            continue;
        }
        bool ok = false;
        if (a[0][0] == a[n - 1][m - 1]) ok = true;
        if (a[0][m - 1] == a[n - 1][0]) ok = true;
        // debug(ok);

        if (a[n - 1][0] == a[n - 1][m - 1]) {
            for (int i = 0; i < m; i++) {
                if (a[0][i] == a[n - 1][0]) ok = true;
            }
        }
        if (a[0][0] == a[0][m - 1]) {
            for (int i = 0; i < m; i++) {
                if (a[n - 1][i] == a[0][0]) ok = true;
            }
        }

        if (a[0][0] == a[n - 1][0]) {
            for (int i = 0; i < n; i++) {
                if (a[i][m - 1] == a[0][0]) ok = true;
            }
        }
        if (a[0][m - 1] == a[n - 1][m - 1]) {
            for (int i = 0; i < n; i++) {
                if (a[i][0] == a[0][m - 1]) ok = true;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}