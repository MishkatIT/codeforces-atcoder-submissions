/*
    Author    : MishkatIT
    Created   : Thursday 11-07-2024 20:38:57
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

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = 0;
        for (int x = 5; x >= 0; x--) {
            for (int y = 5 - x; y >= 0; y--) {
                for (int z = 0; z <= y; z++) {
                    int cur = (a + x) * (b + (y - z)) * (c + z);
                    if (cur > mx) {
                        mx = cur;
                    }
                }
            }
        }
        cout << mx << '\n';
    }

    return 0;
}