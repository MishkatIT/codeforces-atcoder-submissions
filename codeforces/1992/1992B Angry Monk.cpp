/*
    Author    : MishkatIT
    Created   : Thursday 11-07-2024 20:48:19
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
        ll n, k;
        cin >> n >> k;
        vector<int> v(k);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < k - 1; i++) {
            ans += v[i];
            ans += v[i] - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}