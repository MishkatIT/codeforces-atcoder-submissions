/*
    author    : MishkatIT
    created   : Sunday 2023-09-24-19.50.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int k, n, m;
char arr[11][11][11];
int ans = 0;

int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

void dfs(int z, int x, int y)
{
    for (int i = 0; i < 6; i++) {
        arr[z][x][y] = 'v';
        int nz = z + dz[i];
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nz >= 0 && nz < k && nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nz][nx][ny] == '.') {
            dfs(nz, nx, ny);
            ans++;
        }
    }
}

int main()
{
    fio;
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    dfs(0, x - 1, y - 1);
    cout << ++ans;
    return 0;
}

