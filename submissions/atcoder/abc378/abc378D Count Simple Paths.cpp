#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
const int N = 2e5 + 10;

int h, w, k;
vector<string> g;
vector<vector<bool>> vis;
ll cnt = 0;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y, int s) {
    if (s == k) {
        cnt++;
        return;
    }

    vis[x][y] = true;

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= 0 && nx < h && ny >= 0 && ny < w && g[nx][ny] == '.' && !vis[nx][ny]) {
            dfs(nx, ny, s + 1);
        }
    }
    vis[x][y] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> h >> w >> k;
    g.resize(h);
    for (int i = 0; i < h; i++) {
        cin >> g[i];
    }

    vis.assign(h, vector<bool>(w, false));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (g[i][j] == '.') {
                dfs(i, j, 0);
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}
