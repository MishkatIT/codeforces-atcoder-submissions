/*
    author    : MishkatIT
    created   : Monday 2023-11-20-22.22.52
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
        int n, q;
        cin >> n >> q;
        for (int i = 1; i < n; i++) {
            cout << i << ' ' << i + 1 << '\n';
        }
        int cur = n - 1;
        while(q--) {
            int x;
            cin >> x;
            if (x == cur) {
                cout << "-1 -1 -1" << '\n';
            } else {
                cout << n << ' ' << cur << ' ' << x << '\n';
                cur = x;
            }
        }
    }
    return 0;
}


