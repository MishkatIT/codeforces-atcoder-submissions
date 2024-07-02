/*
    Author    : MishkatIT
    Created   : Tuesday 02-07-2024 22:26:51
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
        int ans = 0;
        while (n > 1) {
            if (n & 1) {
                ans++;
                n -= 1;
            } else {
                if (n == 2) {
                    ans++;
                    n = 1;
                } else {
                    ans++;
                    n = 2;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}