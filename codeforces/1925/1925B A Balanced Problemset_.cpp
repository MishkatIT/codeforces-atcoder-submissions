/*
    author    : MishkatIT
    created   : Sunday 2024-01-28-13.21.25
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
        ll n, x;
        cin >> n >> x;
        ll ans = 1;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (x <= n / i) {
                    ans = max(ans, i);
                }
                if (x <= n / (n / i)) {
                    ans = max(ans, n / i);
                }
            }
        }
        if (x == 1) ans = n;
        cout << ans << '\n';
    }
    return 0;
}

