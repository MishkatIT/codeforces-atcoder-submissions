/*
    author    : MishkatIT
    created   : Monday 2023-10-16-23.02.33
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (v.front() != 1) {
            cout << 1 << '\n';
            continue;
        }

        auto possible = [&](ll mid) {
            ll total = 0;
            for (int i = n - 1; i >= 0; i--) {
                if(v[i] > mid) continue;
                ll x = (mid - v[i]) / (i + 1);
                x++;
                total += x;
                mid -= x * (i + 1);
                if(mid < 0) return false;
            }
            return (total > k);

        };

        ll low = 0, high = linf;
        ll ans = -1;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            if(possible(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

