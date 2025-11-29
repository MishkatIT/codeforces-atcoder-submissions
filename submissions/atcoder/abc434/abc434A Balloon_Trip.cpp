/*
    Author    : MishkatIT
    Created   : Saturday 29-11-2025 18:03:01
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while (tc--) {
        ll w, b;
        cin >> w >> b;
        w *= 1000;
        cout << (w + b) / b;
    }
    return 0;
}