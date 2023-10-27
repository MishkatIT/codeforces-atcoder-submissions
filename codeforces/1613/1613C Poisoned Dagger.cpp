/*
    author    : MishkatIT
    created   : Friday 2023-10-27-21.32.05
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
        ll n, h;
        cin >> n >> h;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        ll low = 0, high = linf, ans = -1;
        while (low <= high) {
            ll mid = low + (high - low) / 2LL;
            ll damage = 0;
            for (int i = 0; i + 1 < n; i++) {
                damage += (min(mid, v[i + 1] - v[i]));
            }
            damage += mid;
            if(damage >= h) {
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

