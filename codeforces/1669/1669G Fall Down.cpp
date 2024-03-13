/*
    author    : MishkatIT
    created   : Thursday 2024-03-14-02.33.12
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < m; j++) {
            int star = 0;
            for (int i = 0; i < n; i++) {
                if (a[i][j] == '*') {
                    star++;
                }
                if (a[i][j] == 'o' || i + 1 == n) {
                    int x = i;
                    if (a[i][j] == 'o') x--;
                    for (; x >= 0 && a[x][j] != 'o'; x--) {
                        if (star) {
                            a[x][j] = '*';
                            star--;
                        } else {
                            a[x][j] = '.';
                        }
                    }
                }
            }

        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}


