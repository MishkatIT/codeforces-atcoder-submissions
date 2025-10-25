/*
    Author    : MishkatIT
    Created   : Saturday 25-10-2025 18:00:24
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

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i <= m) {
            cout << "OK" << '\n';
        } else {
            cout << "Too Many Requests" << '\n';
        }
    }

    return 0;
}