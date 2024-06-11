/*
    Author    : MishkatIT
    Created   : Tuesday 11-06-2024 21:13:05
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
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> v[i][j];
            }
        }
        int row = -1;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            int tmx = 0;
            for (int j = 0; j < m; j++) {
                tmx += (v[i][j] == '#');
            }
            if (tmx > mx) {
                mx = tmx;
                row = i + 1;
            }
        }


        int col = -1;
        mx = 0;
        for (int j = 0; j < m; j++) {
            int tmx = 0;
            for (int i = 0; i < n; i++) {
                tmx += (v[i][j] == '#');
            }
            if (tmx > mx) {
                mx = tmx;
                col = j + 1;
            }
        }
        cout << row << ' ' << col << '\n';
    }
    return 0;
}