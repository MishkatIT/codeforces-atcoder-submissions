/*
    Author    : MishkatIT
    Created   : Wednesday 05-06-2024 14:23:08
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
        vector<vector<vector<int>>> ab(2, vector<vector<int>>(n + 5, vector<int>(m + 5)));
        for (int x = 0; x < 2; x++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    cin >> ab[x][i][j];
                }
            }
        }
        vector<vector<array<ll, 2>>> sum(2, vector<array<ll, 2>>(n * m + 5, {0, 0})); // sum of i-th row / col

        for (int x = 0; x < 2; x++) {
            for (int i = 1; i <= n; i++) {
                ll tsum = 0;
                for (int j = 1; j <= m; j++) {
                    tsum += ab[x][i][j];
                }
                for (int j = 1; j <= m; j++) {
                    sum[x][ab[x][i][j]][0] = tsum;
                }
            }

            for (int j = 1; j <= m; j++) {
                ll tsum = 0;
                for (int i = 1; i <= n; i++) {
                    tsum += ab[x][i][j];
                }
                for (int i = 1; i <= n; i++) {
                    sum[x][ab[x][i][j]][1] = tsum;
                }
            }
        }
        bool ok = true;
        for (int i = 1; i <= n * m; i++) {
            ok &= sum[0][i][0] == sum[1][i][0];
            ok &= sum[0][i][1] == sum[1][i][1];
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}