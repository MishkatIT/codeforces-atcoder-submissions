/*
    author    : MishkatIT
    created   : Saturday 2024-03-30-04.42.28
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
const ll linf   = 5e18 + 1;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll low = n, high = 5e18;
        ll ans = -1;
        while(low <= high) {
            ll mid = low + (high - low) / 2;
            ll cur = 0;
            for (int bit = 62; bit >= 0; bit--) {
                if ((n & (1LL << bit)) != (mid & (1LL << bit))) {
                    break;
                } else {
                    cur |= (mid & (1LL << bit));
                }
            }
            if (cur > x) {
                low = mid + 1;
            } else {
                high = mid - 1;
                if (cur == x) {
                    ans = mid;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


