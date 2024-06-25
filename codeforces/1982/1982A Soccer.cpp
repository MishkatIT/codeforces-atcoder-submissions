/*
    Author    : MishkatIT
    Created   : Tuesday 25-06-2024 20:35:13
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
        bool ok = true;
        ok = a < b && c > d;
        if (!ok) ok = b < a && d > c;
        cout << (!ok ? "YES" : "NO") << '\n';
    }
    return 0;
}