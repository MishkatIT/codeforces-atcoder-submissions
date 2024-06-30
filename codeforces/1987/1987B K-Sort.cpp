/*
    Author    : MishkatIT
    Created   : Sunday 30-06-2024 20:48:47
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
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll ans = 0;
        multiset<int> s;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) {
                s.insert(v[i - 1] - v[i]);
                v[i] = v[i - 1];
            }
        }
        // debug(s);
        int sz = s.size();
        ll sum = 0;
        for (auto& i : s) {
            ll cur = i - sum;
            ans += cur * (sz + 1);
            sz--;
            sum = i;
        }
        cout << ans << '\n';
    }
    return 0;
}
