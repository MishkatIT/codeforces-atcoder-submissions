/*
    Author    : MishkatIT
    Created   : Saturday 12-10-2024 18:04:39
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ld ans = 0;
    ld a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        ld c, d;
        cin >> c >> d;
        ans += sqrtl((a - c) * (a - c) + (b - d) * (b - d));
        if (i == n - 1) ans += sqrtl(c * c + d * d);
        a = c, b = d;
    }
    cout << setprecision(20) << ans << '\n';
    return 0;
}