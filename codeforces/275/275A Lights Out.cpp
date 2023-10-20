/*
    author    : MishkatIT
    created   : Friday 2023-10-20-19.12.13
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

int main()
{
    fio;
    int n = 3;
    int arr[n + 5][n + 5];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans(n + 5, vector<int> (n + 5, 1));

    int dx[] = {0, 0, 1, 0, -1};
    int dy[] = {0, 1, 0, -1, 0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(arr[i][j] & 1) {
                for (int k = 0; k < 5; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    ans[nx][ny] ^= 1;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << ans[i][j];
        }
        cout << '\n';
    }
    return 0;
}

