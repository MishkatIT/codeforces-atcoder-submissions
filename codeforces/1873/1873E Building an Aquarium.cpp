/*
    author    : MishkatIT
    created   : Thursday 2023-09-21-21.28.44
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
    ll t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        ll low = 0, high = 1e18;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            ll temp = x;
            for (ll i = 0; i < n; i++) {
                if(v[i] > mid) continue;
                temp -= (mid - v[i]);
                if(temp < 0) break;
            }
            if(temp < 0) {
                high = mid - 1;
            } else {
                ans = max(ans, mid);
                low = mid + 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}