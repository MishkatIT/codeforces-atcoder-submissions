/*
    author    : MishkatIT
    created   : Wednesday 2024-02-28-16.29.58
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
        ll n;
        cin >> n;
        ll ans = 0;
        ll rem = n, cur = 1;
        for (ll i = 2; rem > 0; i++) {
            cur = (cur * i) / __gcd(cur, i); // the number divisible by 1, 2, 3....
            ll mx = n / cur;
            ans = (ans % mod +  (rem - mx) % mod * i % mod) % mod;
            rem = mx;
        }
        cout << ans << '\n';
    }
    return 0;
}


