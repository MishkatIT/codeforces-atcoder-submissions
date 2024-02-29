/*
    author    : MishkatIT
    created   : Thursday 2024-02-29-15.36.57
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

struct p {
    ll l = inf + 2, r = -1, c = 1e15;
};

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        p x, y, z;
        ll mxr = -1, mnl = inf + 2;
        for (int i = 0; i < n; i++) {
            p temp;
            cin >> temp.l >> temp.r >> temp.c;
            mxr = max(mxr, temp.r);
            mnl = min(mnl, temp.l);
            if (temp.l < x.l) {
                x = temp;
            }
            if (temp.l == x.l) {
                if (temp.c < x.c) {
                    x = temp;
                }
            }
            if (temp.r > y.r) {
                y = temp;
            }
            if (temp.r == y.r) {
                if (temp.c < y.c) {
                    y = temp;
                }
            }
            if (temp.l < z.l || z.r < temp.r) {
                z = temp;
            }
            if (temp.l == z.l && temp.r == z.r) {
                if (temp.c < z.c) {
                    z = temp;
                }
            }

            ll ans = linf;
            if (x.l == mnl && y.r == mxr) {
                ans = min(ans, x.c + y.c);
            }
            if (z.l == mnl && z.r == mxr) {
                ans = min(ans, z.c);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}

