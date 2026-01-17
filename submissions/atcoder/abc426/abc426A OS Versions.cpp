/*
    Author    : MishkatIT
    Created   : Saturday 04-10-2025 18:01:12
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

    string x, y;
    cin >> x >> y;
    vector<string> v{"Ocelot", "Serval", "Lynx"};
    bool ok = true;
    for (int i = 2; i >= 0; i--) {
        if (y == v[i]) {
            if (x != v[i]) {
                ok = false;
                break;
            }
        }
        if (x == v[i]) break;
    }
    cout << (ok ? "Yes" : "No") << '\n';

    return 0;
}