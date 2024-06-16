/*
    Author    : MishkatIT
    Created   : Monday 17-06-2024 02:22:25
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
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = n * a;
        if (b - a >= n) {
            ans = b * (b + 1)/ 2;
            ans -= (b - n) * (b - n + 1) / 2;
        } else if(b > a) {
            ans -= (b - a) * a;
            ans += b * (b + 1) / 2 - a * (a + 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}