/*
    Author    : MishkatIT
    Created   : Tuesday 21-05-2024 21:59:41
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        map<pair<int, int>, ll> ab, ac, bc;
        map<array<int, 3>, ll> abc;
        for (int i = 0; i + 2 < n; i++) {
            ans += ab[{v[i], v[i + 1]}];
            ans += ac[{v[i], v[i + 2]}];
            ans += bc[{v[i + 1], v[i + 2]}];

            ab[{v[i], v[i + 1]}]++;
            ac[{v[i], v[i + 2]}]++;
            bc[{v[i + 1], v[i + 2]}]++;

            abc[{v[i], v[i + 1], v[i + 2]}]++;
            ans -= 3 * (abc[{v[i], v[i + 1], v[i + 2]}] - 1);
        }
        cout << ans << '\n';
    }
    return 0;
}