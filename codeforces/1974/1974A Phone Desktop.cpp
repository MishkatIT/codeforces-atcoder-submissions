/*
    Author    : MishkatIT
    Created   : Monday 20-05-2024 20:34:44
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
        int x, y;
        cin >> x >> y;
        int ans = (y + 1) / 2;
        int rem = (15 * ans - y * 4) ;
        x -= rem;
        // debug(rem); 
        while(x > 0) {
            ans += 1;
            x -= 15;
        }
        cout << ans << '\n';
    }
    return 0;
}