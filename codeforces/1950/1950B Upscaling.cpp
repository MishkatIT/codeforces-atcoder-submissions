/*
    author    : MishkatIT
    created   : Friday 2024-03-29-03.06.43
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
        n *= 2;
        char a[n + 5][n + 5];
        bool t = true, s = true;
        for (int i = 1; i <= n; i++) {
            t = s;
            for (int j = 1; j <= n; j++) {
                if (t) {
                    a[i][j] = '#';
                } else {
                    a[i][j] = '.';
                }
                if (j % 2 == 0) t ^= 1;
            }
            if (i % 2 == 0) s ^= 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}

