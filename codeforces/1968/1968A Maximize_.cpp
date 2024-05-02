/*
    Author    : MishkatIT
    Created   : Thursday 02-05-2024 21:19:42
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
        int x;
        cin >> x;
        int mx = 0;
        int ans = 1;
        for (int i = 1; i < x; i++) {
            int g = __gcd(x, i) + i;
            if (g > mx) {
                mx = g;
                ans = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}