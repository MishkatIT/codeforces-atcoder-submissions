/*
    Author    : MishkatIT
    Created   : Saturday 14-06-2025 18:17:29
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

    ll n, q;
    cin >> n >> q;
    vector<int> v(n + 5);
    iota(v.begin(), v.end(), 1);
    ll sf = 0;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            ll pos, val;
            cin >> pos >> val;
            --pos;
            ll x = (pos + sf) % n;
            v[x] = val;
        } else if (type == 2) {
            ll pos; cin >> pos;
            --pos;
            ll x = (pos + sf) % n;
            cout << v[x] << '\n';
        } else {
            ll val;
            cin >> val;
            sf += val;
            sf %= n;
        }
    }
    return 0;
}