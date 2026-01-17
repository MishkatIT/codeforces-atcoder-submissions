/*
    author    : MishkatIT
    created   : Saturday 2024-02-17-18.19.06
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 504;
const ll inf    = 1e9;
const ll linf   = 1e18;

char arr[N][N];
int dy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
int dx[] = {+0, +0  -1, +1, -1, +1, -1, +1};
//          R   L   U   D   RU  RD  LU  LD

string str;
bool bfs(int i, int j) {
    if (arr[i][j] != '#') {
        for (auto& x : str) {
            if (x == 'R') {
                i += 0;
                j += 1;
            }
            if (x == 'L') {
                i += 0;
                j += -1;
            }
            if (x == 'U') {
                i += -1;
                j += 0;
            }
            if (x == 'D') {
                i += 1;
                j += 0;
            }
            if (arr[i][j] == '#') return false;
        }
        return true;
    } else return false;
}

int main()
{
    fio;
    int n, m, len;
    cin >> n >> m >> len;
    cin >> str;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) arr[i][j] = '#';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) ans += bfs(i, j);
    }
    cout << ans << '\n';
    return 0;
}

