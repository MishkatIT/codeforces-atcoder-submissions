/*
    Author    : MishkatIT
    Created   : Saturday 27-07-2024 18:01:05
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto& i : v) cin >> i;
    bool ok = true;
    for (int i = 0; i + 2 < n; i++) {
        if (v[i] == v[i + 1] && v[i + 1] == "sweet") {
            ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}