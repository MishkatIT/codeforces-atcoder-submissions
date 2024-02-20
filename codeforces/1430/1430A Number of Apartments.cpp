/*
    author    : MishkatIT
    created   : Tuesday 2024-02-20-23.55.38
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

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n / 3 + 1; i++) {
        for (int j = 0; j < n / 5 + 1 ; j++) {
            for (int k = 0; k < n / 7 + 1; k++) {
                ll temp = 3 * i + 5 * j + 7 * k;
                if (temp > n) break;
                if (temp == n) {
                    cout << i << ' ' << j << ' ' << k << '\n';
                    return;
                }
            }
        }
    }
    cout << -1 << '\n';
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


