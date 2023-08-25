/*
    author    : MishkatIT
    created   : Friday 2023-08-25-21.01.16
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
        ll n;
        cin >> n;
        auto check = [&](ll x) {
            return x * (x - 1LL) / 2LL;
        };
        ll low = 0, high = 2e9;
        ll ans;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
//        debug(mid)
            if(check(mid) > n) {
                high = mid - 1;
            } else {
                low = mid + 1;
                ans = mid;
            }
        }
        cout << ans + (n - check(ans)) << '\n';
    }
    return 0;
}
