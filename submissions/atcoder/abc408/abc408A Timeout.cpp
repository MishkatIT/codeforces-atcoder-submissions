/*
    Author    : MishkatIT
    Created   : Saturday 31-05-2025 18:05:11
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

    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    int last = 0;
    bool ok = true;
    for (auto& i : v) {
        if (i - last > s) ok = false;
        last = i;
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}