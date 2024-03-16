/*
    author    : MishkatIT
    created   : Saturday 2024-03-16-19.27.03
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
        vector<vector<char>> a(2, vector<char> (n));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        bool ok = true;
        for (int i = 0; i + 1 < n; i++) {
            if (i % 2 == 0) {
                ok &= (a[0][i + 1] == '>' || a[1][i] == '>');
            } else {
                ok &= (a[0][i] == '>' || a[1][i + 1] == '>');
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
