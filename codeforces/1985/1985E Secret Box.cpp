/*
    Author    : MishkatIT
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
        ll x, y, z, k;
        cin >> x >> y >> z >> k;
        ll ans = 0;
        
        for (ll a = 1; a * a * a <= k; a++) {
            if (k % a == 0) {
                for (ll b = a; b * b <= k / a; b++) {
                    if ((k / a) % b == 0) {
                        ll c = k / (a * b);
                        if (a <= x && b <= y && c <= z) {
                            ans = max(ans, (x - a + 1) * (y - b + 1) * (z - c + 1));
                        }
                        if (a <= x && c <= y && b <= z) {
                            ans = max(ans, (x - a + 1) * (y - c + 1) * (z - b + 1));
                        }
                        if (b <= x && a <= y && c <= z) {
                            ans = max(ans, (x - b + 1) * (y - a + 1) * (z - c + 1));
                        }
                        if (b <= x && c <= y && a <= z) {
                            ans = max(ans, (x - b + 1) * (y - c + 1) * (z - a + 1));
                        }
                        if (c <= x && a <= y && b <= z) {
                            ans = max(ans, (x - c + 1) * (y - a + 1) * (z - b + 1));
                        }
                        if (c <= x && b <= y && a <= z) {
                            ans = max(ans, (x - c + 1) * (y - b + 1) * (z - a + 1));
                        }
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
