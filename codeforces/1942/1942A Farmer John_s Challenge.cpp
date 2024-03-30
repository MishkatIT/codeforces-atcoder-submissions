/*
    author    : MishkatIT
    created   : Sunday 2024-03-31-01.48.47
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
        int n, k;
        cin >> n >> k;
        if (k > 1 && k < n) {
            cout << -1 << '\n';
        } else {
            if (k == 1) {
                for (int i = 1; i <= n; i++) {
                    cout << i << ' ';
                }
                cout << '\n';
            } else {
                for (int i = 1; i <= n; i++) {
                    cout << 1 << ' ';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}

