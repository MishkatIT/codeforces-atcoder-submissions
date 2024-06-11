/*
    Author    : MishkatIT
    Created   : Tuesday 11-06-2024 20:37:40
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
        int ans = 2;
        ll msum = 0;
        for (int i = 2; i <= n; i++) {
            ll sum = 0;
            for (int j = 1; i * j <= n ; j++) {
                sum += (i * j);
            }
            if (msum < sum) {
                msum = sum;
                ans = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}