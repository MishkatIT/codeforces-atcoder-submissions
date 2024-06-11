/*
    Author    : MishkatIT
    Created   : Tuesday 11-06-2024 20:55:02
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll sum = 0;
        ll mx = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] < mx) {
                sum -= mx;
                sum += v[i];
                v[i] = mx;
            } else mx = v[i];
            if (sum == v[i]) ans++;
            sum += v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}