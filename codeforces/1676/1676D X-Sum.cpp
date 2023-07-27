/*
    author    : MishkatIT
    created   : Thursday 2023-07-27-23.03.14
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
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp = a[i][j];
                int row, col;
                row = i - 1, col = j - 1;
                while(row >= 0 && col >= 0) {
                    temp += a[row--][col--];
                }
                row = i + 1, col = j - 1;
                while(row < n && col >= 0) {
                    temp += a[row++][col--];
                }
                row = i - 1, col = j + 1;
                while(row >= 0 && col < m) {
                    temp += a[row--][col++];
                }
                row = i + 1, col = j + 1;
                while(row < n && col < m) {
                    temp += a[row++][col++];
                }
                mx = max(mx, temp);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}

