/*
    author    : MishkatIT
    created   : Saturday 2023-09-23-19.57.47
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e3 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;
char arr[N][N];
int minPath = inf;


void bfsME(pair<int, int>& x)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<array<int, 3>> q;
    q.push({x.first, x.second, 0});
    vis[x.first][x.second] = true;
    while(!q.empty()) {
        int x = q.front()[0];
        int y = q.front()[1];
        int cur = q.front()[2];
        q.pop();
        for (int i = 0; i < 4; i++) {
            int a = x + dx[i];
            int b = y + dy[i];
//        debug(arr[a][b])
            if(a > -1 && a < n && b > -1 && b < m) {
                if(arr[a][b] == 'E') {
                    minPath = min(minPath, cur + 1);
                } else {
                    if(arr[a][b] != 'T' && !vis[a][b]) {
                        q.push({a, b, cur + 1});
                        vis[a][b] = true;
                    }
                }
            }
        }
    }

}

int ans = 0;

void bfsOthers(pair<int, int>& x)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<array<int, 3>> q;
    q.push({x.first, x.second, 0});
    vis[x.first][x.second] = true;
    while(!q.empty()) {
        int x = q.front()[0];
        int y = q.front()[1];
        int dis = q.front()[2];
//        debug(dis)
        q.pop();
        for (int i = 0; i < 4; i++) {
            int a = x + dx[i];
            int b = y + dy[i];
            if(a > -1 && a < n && b > -1 && b < m) {
                if(arr[a][b] != 'T' && arr[a][b] != 'S' && !vis[a][b]) {
                    if(dis + 1 <= minPath) {
//                        debug(a)debug(b) cout << '\n';
                        ans += (arr[a][b] - '0');
                        q.push({a, b, dis + 1});
                        vis[a][b] = true;
                    }
                }
            }
        }
    }

}


int main()
{
    fio;
    cin >> n >> m;
    pair<int, int> start, exit;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'S') {
                start = {i, j};
            }
            if(arr[i][j] == 'E') {
                exit = {i, j};
            }
        }
    }

    bfsME(start);
    bfsOthers(exit);
//    debug(minPath)
//    cout << start.first << start.second;
    cout << ans;
    return 0;
}

