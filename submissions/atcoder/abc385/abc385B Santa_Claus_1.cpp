/*
    Author    : MishkatIT
    Created   : Saturday 21-12-2024 18:04:32
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
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    string str;
    cin >> str;
    // King's move
    int dy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
    int dx[] = {+0, +0, -1, +1, -1, +1, -1, +1};
    //           R   L   U   D   RU  RD  LU  LD
    
    set<pair<int, int>> s;
    --x, --y;
    for (auto& i : str) {
        int a = x, b = y;
        if (i == 'R') y++;
        if (i == 'L') y--;
        if (i == 'U') x--;
        if (i == 'D') x++;
        if (v[x][y] != '#') {
            if (v[x][y] == '@') s.insert({x, y});
        } else {
            x = a, y = b;
        }
    }
    cout << x + 1 << ' ' << y + 1 << ' ' << (int)s.size();
    return 0;
}