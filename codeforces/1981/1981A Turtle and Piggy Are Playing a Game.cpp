/*
    Author    : MishkatIT
    Created   : Friday 31-05-2024 16:04:21
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
        ll ans = 0;
        ll x = 1;
        ll a, b;
        cin >> a >> b;
        while (x * 2 <= b) {
            x *= 2;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}