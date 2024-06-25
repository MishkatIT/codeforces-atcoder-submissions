/*
    Author    : MishkatIT
    Created   : Tuesday 25-06-2024 21:04:57
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
        ll x, y, k;
        cin >> x >> y >> k;

        while (k > 0) {
            ll temp = (x % y == 0) ? (y - 1) : (y - 1 - x % y);

            if (temp >= k) {
                x += k;
                break;
            }
            // debug(temp);
            x += temp + 1;
            k -= temp + 1;

            while (x % y == 0) {
                x /= y;

            }
            if (x < y) {
                ll temp = (y - x % y);
                if (k >= temp) {
                    x = 1;
                    k -= temp;
                }
                k %= (y - 1);
                x += k;
                k = 0;
            }
        }
        
        cout << x << '\n';
    }
    return 0;
}
