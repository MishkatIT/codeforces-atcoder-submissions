/*
    author    : MishkatIT
    created   : Monday 2024-01-29-23.36.32
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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        int l = 0, r = n - 1;
        ll x = 0;
        while(l <= r) {
            if (l == r) {
                if (v[r] <= 1) {
                    ans++;
                } else {
                    ll temp = (x + v[r]) / 2;
                    if (x % 2 == v[r] % 2) {
                        ans += temp - x + 1;
                    } else {
                        ans += temp - x + 2;
                    }
                }
                break;
            }
            ll need = v[r] - x;
            need = min(need, v[l]);
            v[l] -= need;
            if (v[l] == 0) {
                l++;
            }
            ans += need;
            x += need;
//            debug(need)
            if (v[r] == x) {
                x = 0;
                r--;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


