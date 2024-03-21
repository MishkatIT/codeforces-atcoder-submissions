/*
    author    : MishkatIT
    created   : Thursday 2024-03-21-23.09.56
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
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = a;
        ans += (b / 3);
        b %= 3;
//        debug(b)
        if (b > 0) {
            c -= (3 - b);
            ans++;
        }
        if (c < 0) {
            ans = -1;
        } else {
            ans += (c / 3);
            c %= 3;
            ans += (c > 0);
        }
        cout << ans << '\n';
    }
    return 0;
}

