/*
    Author    : MishkatIT
    Created   : Saturday 24-05-2025 19:34:38
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
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++) cin >> v[i];
    vector<int> p(n + 5), s(n + 5);
    int g = v[1];
    for (int i = 1; i <= n; i++) {
        g = __gcd(g, v[i]);
        p[i] = g;
    }
    g = v[n];
    for (int i = n; i > 0; i--) {
        g = __gcd(g, v[i]);
        s[i] = g;
    }
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        mx = max(mx, __gcd(p[i - 1], s[i + 1]));
    }
    cout << mx;
    return 0;
}