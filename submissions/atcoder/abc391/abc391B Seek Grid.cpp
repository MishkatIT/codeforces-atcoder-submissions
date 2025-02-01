/*
    Author    : MishkatIT
    Created   : Saturday 01-02-2025 22:46:31
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
    vector<vector<char>> s(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    vector<vector<char>> t(m, vector<char>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t[i][j];
        }
    }

    auto ok = [&](int x, int y) {
        if (x + m > n) return false;
        if (y + m > n) return false;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (t[i][j] != s[x + i][y + j]) return false;
            }
        }
        return true;
    };
    pair<int, int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ok(i, j)) {
                ans = {i + 1, j + 1};
            }
        }
    }
    cout << ans.first << ' ' << ans.second;
    return 0;
}