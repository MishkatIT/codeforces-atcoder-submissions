/*
    Author    : MishkatIT
    Created   : Tuesday 25-06-2024 21:45:47
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        ll l, n, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        ll s = 0, ans = 0;
        ll sum = 0;
        for (int e = 0; e < n; e++) {
            sum += v[e];
            while (sum > r && s <= e) {
                sum -= v[s];
                s++;
            }
            if (sum >= l && sum <= r) {
                ans++;
                sum = 0;
                s = e + 1;
            }
        }
        cout << ans << '\n';
    }
    
    return 0;
}
