/*
    author    : MishkatIT
    created   : Wednesday 2024-01-31-23.51.36
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
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        while(n > 0) {
            if (n % k == 0) {
                n /= k;
                ans++;
            } else {
                ans += (n % k);
                n -= (n % k);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


