#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 11;
int n, m, k;
char arr[N][N][N];

int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
// 3 dimensional, 6 directional array

bool inRange(int nz, int nx, int ny)
{
    return (nx >= 0 && nx < n && ny >= 0 && ny < m && nz >= 0 && nz < k);
}

int ans = 0;
void bfs(int z, int x, int y)
{
    queue<array<int, 3>> q;
    q.push({z, x, y});
    arr[z][x][y] = 'v';

    while (!q.empty()) {
        array<int, 3> now = q.front();
        q.pop();
        for (int i = 0; i < 6; i++) {
            int nz = now[0] + dx[i];
            int nx = now[1] + dy[i];
            int ny = now[2] + dz[i];

            if (inRange(nz, nx, ny) && arr[nz][nx][ny] == '.') {
                q.push({nz, nx, ny});
                arr[nz][nx][ny] = 'v'; // Marked as visited
                ans++;
            }
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
    int tapX, tapY;
    cin >> tapX >> tapY;
    --tapX, --tapY;
    bfs(0, tapX, tapY);
    cout << ++ans;
    return 0;
}
