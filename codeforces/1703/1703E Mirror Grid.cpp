/*
    author    : MishkatIT
    created   : Tuesday 2024-04-02-04.29.35
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
        int n;
        cin >> n;
        char a[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int op = 0;
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                int x = 0;
                x += a[i][j] - '0';
                x += a[j][n - i - 1] - '0';
                x += a[n - i - 1][n - j - 1] - '0';
                x += a[n - j - 1][i] - '0';
                op += min(x, 4 - x);
            }
        }
        cout << op << '\n';
    }
    return 0;
}

