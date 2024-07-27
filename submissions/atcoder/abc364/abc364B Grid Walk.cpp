/*
    Author    : MishkatIT
    Created   : Saturday 27-07-2024 18:04:35
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

    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<vector<char>> v(n + 5, vector<char>(m + 5, '#'));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
        }
    }
    string str;
    cin >> str;
    for (auto & i : str) {
        if (i == 'L' && v[x][y - 1] == '.') {
            x = x;
            y = y - 1;
        }
        if (i == 'R' && v[x][y + 1] == '.') {
            x = x;
            y = y + 1;
        }
        if (i == 'U' && v[x - 1][y] == '.') {
            x = x - 1;
            y = y;
        }
        if (i == 'D' && v[x + 1][y] == '.') {
            x = x + 1;
            y = y;
        }
    }
        cout << x << ' ' << y << '\n';
    return 0;
}