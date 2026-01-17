/*
    Author    : MishkatIT
    Created   : Saturday 14-12-2024 18:47:38
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define int long long
using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    ll X; cin >> X;
    int x, y;
    cin >> x >> y;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    --x, --y;

    // King's move
    int dy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
    int dx[] = {+0, +0, -1, +1, -1, +1, -1, +1};

    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<>> pq;
    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<>> ng;
    vector<vector<bool>> vis(n, vector<bool>(m));

    auto inRange = [&](int i, int j) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    };

    pq.push({v[x][y], x, y});
    vis[x][y] = true;
    ll tot = v[x][y];
    while (!pq.empty()) {
        int cur = pq.top()[0];
        int i = pq.top()[1];
        int j = pq.top()[2];
        pq.pop();
        for (int d = 0; d < 4; d++) {
            int nx = i + dx[d];
            int ny = j + dy[d];
            if (inRange(nx, ny) && !vis[nx][ny]) {
                ng.push({v[nx][ny], nx, ny});
                vis[nx][ny] = true;
            }
        }
        while (!ng.empty()) {
            int cur = ng.top()[0];
            int i = ng.top()[1];
            int j = ng.top()[2];
            if (v[i][j] < (tot + X - 1) / X) {
                    ng.pop();
                    tot += v[i][j];
                    pq.push({v[i][j], i,j});
            } else break;
        }
    }
    cout << tot << '\n';
    return 0;
}
