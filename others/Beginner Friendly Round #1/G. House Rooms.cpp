/*
    author    : MishkatIT
    created   : Wednesday 2024-03-06-22.17.05
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
int main()
{
    fio;
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> prime;
    const int N = 1e7;
    vector<int> p(N, true);
    for (ll i = 2; i * i < N; i++) {
        if (p[i]) {
            for (ll j = i * i; j < N; j += i) {
                p[j] = false;
            }
        }
    }
    for (int i = 1; i < N; i++) {
        if (p[i]) {
            prime.push_back(i);
        }
    }

    int dy[] = {1, -1, 0, 0};
    int dx[] = {0, 0, -1, 1};

    vector<vector<bool>> vis(n, vector<bool>(n, false));
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!vis[i][j] && a[i][j] == '.') {
                int cur = 0;
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;
                while(!q.empty()) {
                    int xx = q.front().first;
                    int yy = q.front().second;
                    q.pop();
                    ans += prime[cur];
                    cur++;
                    for (int x = 0; x < 4; x++) {
                        int nx = dx[x] + xx;
                        int ny = dy[x] + yy;
                        if (nx < n && ny < n && !vis[nx][ny] && a[nx][ny] == '.') {
                            q.push({nx, ny});
                            vis[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}

