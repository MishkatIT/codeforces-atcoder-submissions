/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 18:01:37
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

    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    reverse(v.begin() + l - 1, v.begin() + r);
    for (auto &i : v)
        cout << i << ' ';

    return 0;
}