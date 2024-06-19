/*
    Author    : MishkatIT
    Created   : Wednesday 19-06-2024 23:54:26
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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans = (x + y) * a;
        ans = min(ans, abs(x - y) * a + min(x, y) * b);
        cout << ans << '\n';
    }
    return 0;
}