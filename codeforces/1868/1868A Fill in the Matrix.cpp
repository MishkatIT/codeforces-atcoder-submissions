/*
    author    : MishkatIT
    created   : Thursday 2023-09-14-17.46.50
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
        int now = -1;
        set<int> s;

        for (int j = 0; j < m; j++) {
            int x = j;
            for (int i = 0; i < min(n, m); i++) {
                if(j == 0) {
                    if(i == m - 1) a[i][j] = 0;
                    else a[i][j] = i;

                } else {
                    if(x == now) x++;
                    if(x == m) x = 0;
                    if(x == now) x++;

                    a[i][j] = x;
                }
                x++;
            }
            now++;
        }

        if(n > m) {
            for (int i = m; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = j;
                }
            }
        }

        int mex;
        if(m == 1) mex = 0;
        else mex = min(n + 1, m);
        cout << mex << '\n';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " \n"[j == m - 1];
            }
        }
    }
    return 0;
}

