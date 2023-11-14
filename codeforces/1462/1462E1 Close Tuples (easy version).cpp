/*
    author    : MishkatIT
    created   : Tuesday 2023-11-14-18.01.29
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
        vector<ll> v(n);
        for (auto& i: v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        auto possible = [&](ll st) {
            ll low = st;
            ll high = n - 1;
            ll mx = st;
            while(low <= high) {
                ll mid = low + (high - low) / 2;
                if (v[mid] - v[st] <= 2) {
                    low = mid + 1;
                    mx = mid;
                } else {
                    high = mid - 1;
                }
            }
            ll tot = mx - st;
            if (tot >= 2) {
                return (tot * (tot - 1)) / 2LL;
            }
            return 0LL;
        };
        for (int i = 0; i < n - 2; i++) {
            ans += possible(i);
        }
        cout << ans << '\n';
    }
    return 0;
}


