/*
    author    : MishkatIT
    created   : Saturday 2024-01-13-20.52.59
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
        ll n, x, k;
        cin >> n >> x >> k;

        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> p(n + 5);
        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] + v[i];
        }
        ll mx = -inf;
        for (int i = n; i >= 0 && i >= (n - x); i--) {
//                debug(p[max(0LL, i - k) * 2])
//                debug(p[i] - p[i - k])
//                debug(p[i] - (p[i] - p[max(0LL, i - k)] * 2))
            mx = max(mx, p[i] - (p[i] - p[max(0LL, i - k)]) * 2);
        }

        cout << mx << '\n';






//        int pos = n;
//        ll ans = p[n];
//
////        for (auto& i : p) cout << i << ' ';
//        for (int i = n; i > 0; i--) {
//            ll temp = p[i] - v[i] * 2;
//            if (temp >= mx) {
//                ans -= v[i] * 2;
//                k--;
//            } else {
//                if (x) {
//                    x--;
//                    pos--;
//                }
//            }
//            if (!k) break;
//        }
//
//        while(k--) {
//            ans -= (v[pos] * 2);
//            pos--;
//        }
//        cout << ans << '\n';
    }
    return 0;
}

