/*
    Author    : MishkatIT
    Created   : Friday 24-05-2024 03:38:13
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
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<ll> b(m);
    for (auto &i : b) {
        cin >> i;
    }
    ll godfather = 0;
    for (int i = 0; i < n; i++) {
        godfather = __gcd(godfather, a[0] - a[i]);
    }
    for (int i = 0; i < m; i++) {
        cout << abs(__gcd(a[0] + b[i], godfather)) << ' ';
    }
    return 0;
}