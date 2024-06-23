/*
    Author    : MishkatIT
    Created   : Sunday 23-06-2024 20:57:20
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

int dy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
int dx[] = {+0, +0, -1, +1, -1, +1, -1, +1};
//           R   L   U   D   RU  RD  LU  LD

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n + 5, vector<int>(m + 5, 1));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                bool ok = true;
                for (int d = 0; d < 4; d++) {
                    ok &= (v[i][j] > v[i + dx[d]][j + dy[d]]);
                }
                if (ok) {
                    int mn = 1;
                    for (int d = 0; d < 4; d++) {
                        mn = max(mn, v[i + dx[d]][j + dy[d]]);
                    }
                    if (ok)
                        v[i][j] = mn;
                }
            }
        }
         for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << v[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}