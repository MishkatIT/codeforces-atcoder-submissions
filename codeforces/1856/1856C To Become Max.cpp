/*
    author    : MishkatIT
    created   : Sunday 2023-08-06-21.57.53
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll mx = 0;
        for (auto& i: v) {
            cin >> i;
            mx = max(mx, i);
        }

        auto possible = [&](ll mid) -> bool {
            if(mx >= mid)
            {
                return true;
            }
            for (ll i = 0; i < n - 1; i++)
            {
                ll idx = i;
                ll tempK = k;
                ll target = mid;
                while(tempK >= 0 && idx < n) {
                    if(v[idx] >= target) {
                        return true;
                    }
                    tempK -= (target - v[idx]);
                    target--;
                    idx++;
                }
            }
            return false;
        };

        ll low = 0, high = linf;
        ll ans = 0;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            if(possible(mid)) {
                ans = mid;
                low = mid + 1LL;
            } else {
                high = mid - 1LL;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

