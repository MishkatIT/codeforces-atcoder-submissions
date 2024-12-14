/*
    Author    : MishkatIT
    Created   : Saturday 14-12-2024 18:29:37
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

#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    ll sum = 0;
    for (auto& i : v) {
        cin >> i;
        sum += i;
    }
    // debug(sum);
    s %= sum;
    // debug(s);
    ll temp = 0;
    bool ok = (s == temp);
    v = v;
    for (int i = 0; i < n; i++) v.push_back(v[i]);
    n *= 2;
    for (int l = 0, r = 0; r < n; r++) {
        temp += v[r];
        while (temp > s) {
            temp -= v[l];
            l++;
        }
        if (temp == s) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}