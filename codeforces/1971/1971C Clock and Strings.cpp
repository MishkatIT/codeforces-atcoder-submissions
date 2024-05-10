/*
    Author    : MishkatIT
    Created   : Friday 10-05-2024 20:50:53
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        bool ok = false;
        ok |= (a < c && d < b);
        ok |= (c < a && b < d);
        ok |= (b < c);
        ok |= (d < a);
        cout << (!ok ? "YES" : "NO") << '\n';
    }
    return 0;
}