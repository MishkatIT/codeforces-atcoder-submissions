/*
    author    : MishkatIT
    created   : Thursday 2023-08-17-21.39.33
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
        ll c, v, a, b;
        cin >> c >> v >> a >> b; // 11 3 6 1
        ll ans = 0;
        ll x = c / v;
        ll y = v * min(x, b);
        y += a;
        if(y < c) {
            y = c - y;
            if(y % v == 0) {
                ans = y / v;
            } else {
//          debug(y)
                ll p = y / v;
                ll q = y - (p * v);
                ll za = p + q;
//          debug(za)
                ll r = p + 1;
                ll s = (r * v) - y;
                ll zb = max(s - a, 0LL) + r;
                if(a >= s) ans = min(zb, za);
                else ans = za;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
