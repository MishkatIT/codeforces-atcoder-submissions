/*
    Author    : MishkatIT
    Created   : Tuesday 11-06-2024 22:27:04
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
        map<int, int> val;
        vector<vector<int>> color(n, vector<int>(m, -1));
        auto bfs = [&](int startX, int startY, int cl) {
            // debug(v);
            queue<pair<int, int>> q;
            q.push({startX, startY});
            color[startX][startY] = 1;
            int dx[] = {1, -1, 0, 0};
            int dy[] = {0, 0, 1, -1};
            int cnt = 1;
            while (!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                color[x][y] = cl;
                q.pop();
                for (int k = 0; k < 4; ++k) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] == '#' && color[nx][ny] == -1) {
                        color[nx][ny] = cl;
                        cnt++;
                        q.push({nx, ny});
                    }
                }
            }
            val[cl] = cnt;
        };
        int cl = 0; // color
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == '#' && color[i][j] == -1) {
                    bfs(i, j, ++cl);
                }
            }
        }
        // debug(val);
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            int temp = 0;
            set<int> taken;
            for (int j = 0; j < m; ++j) {
                if (color[i][j] == -1) {
                    temp += 1;
                }
                for (int x = i - 1; x <= i + 1; ++x) {
                    if (x >= 0 && x < n) {
                        if (color[x][j] != -1) {
                            taken.insert(color[x][j]);
                        }
                    }
                }
            }
            //debug(taken);
            for (auto &x : taken) {
                temp += val[x];
            }
            // //debug(ans);
            ans = max(ans, temp);
        }
        // //debug(ans);
        // //debug(color);
        for (int j = 0; j < m; ++j) {
            int temp = 0;
            set<int> taken;
            for (int i = 0; i < n; ++i) {
                if (color[i][j] == -1) {
                    temp += 1;
                }
                for (int x = j - 1; x <= j + 1; ++x) {
                    if (x >= 0 && x < m) {
                        if (color[i][x] != -1) {
                            taken.insert(color[i][x]);
                        }
                    }
                }
            }
            for (auto &x : taken) {
                temp += val[x];
            }
            // //debug(taken);
            ans = max(ans, temp);
            // //debug(ans);
        }

        cout << ans << '\n';
    }
    return 0;
}
