/*
    Author    : MishkatIT
    Created   : Saturday 26-10-2024 18:05:41
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

    int n = 8;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int x = 0; x < n; x++) {
            ok &= v[i][x] != '#';
        }
        for (int j = 0; j < n; j++) {
            bool f = ok;
            for (int x = 0; x < n; x++) {
                f &= v[x][j] != '#';
            }
            // if (ok) v[i][j] = '#';
            ans += f;
        }
    }
    cout << ans << '\n';
    return 0;
}