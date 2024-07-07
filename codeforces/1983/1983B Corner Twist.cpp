/*
    Author    : MishkatIT
    Created   : Monday 08-07-2024 00:44:31
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
        vector<vector<int>> bad(n, vector<int>(m)), good(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char x; cin >> x;
                bad[i][j] = x - '0';
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char x; cin >> x;
                good[i][j] = x - '0';
            }
        }
        for (int i = 0; i + 1 < n; i++) {
            for (int j = 0; j + 1 < m; j++) {
                int cnt = 0;
                while (bad[i][j] != good[i][j]) {
                    bad[i][j] += 1;
                    bad[i][j] %= 3;
                    bad[i + 1][j + 1] += 1;
                    bad[i + 1][j + 1] %= 3;
                    cnt++;
                }
                bad[i][j + 1] += cnt * 2;
                bad[i][j + 1] %= 3;
                bad[i + 1][j] += cnt * 2;
                bad[i + 1][j] %= 3;
            }
        }
        // debug(bad);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            bad[i][m - 1] %= 3;
            ok &= (good[i][m - 1] == bad[i][m - 1]);
        }
        for (int j = 0; j < m; j++) {
            bad[n - 1][j] %= 3;
            ok &= (good[n - 1][j] == bad[n - 1][j]);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}