/*
    Author    : MishkatIT
    Created   : Saturday 08-11-2025 18:03:23
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

    int x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    int q; cin >> q;
    map<int, int> mp;
    while (q--) {
        int val;
        cin >> val;
        --val;
        if (mp[val]) {
            x -= v[val];
            mp[val] = 0;
        } else {
            x += v[val];
            mp[val] = 1;
        }
        cout << x << '\n';
    }

    return 0;
}