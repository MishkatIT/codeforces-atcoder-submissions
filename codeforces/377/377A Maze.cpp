/*
    author    : MishkatIT
    created   : Saturday 2023-12-16-20.02.02
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 5050;
const ll inf    = 1e9;
const ll linf   = 1e18;
int n, m, k;
char arr[N][N];
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

bool vis[N][N];

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    arr[x][y] = '-';
    k--;
    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        vis[a][b] = true;
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + a;
            int ny = dy[i] + b;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && arr[nx][ny] == '.' && k) {
                k--;
                q.push({nx, ny});
                arr[nx][ny] = '-';
            }
        }
    }
}

int main()
{
    fio;
    cin >> n >> m >> k;
    int x, y;
    int dot = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '.') {
                x = i, y = j;
                dot++;
            }
        }
    }

    k = dot - k;
    bfs(x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '-') {
                cout << '.';
            } else if (arr[i][j] == '#') {
                cout << '#';
            } else {
                cout << 'X';
            }
        }
        cout << '\n';
    }
    return 0;
}


