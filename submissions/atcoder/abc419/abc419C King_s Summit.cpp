/*
    Author    : MishkatIT
    Created   : Saturday 16-08-2025 18:20:47
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

    int n;
    cin >> n;
    int xmin = inf, ymin = inf, xmax = 0, ymax = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        xmin = min(xmin, a);
        ymin = min(ymin, b);
        xmax = max(xmax, a);
        ymax = max(ymax, b);
    }
    int ans =  max(xmax - xmin, ymax - ymin);
    cout << (ans + 1) / 2 << '\n';

    return 0;
}