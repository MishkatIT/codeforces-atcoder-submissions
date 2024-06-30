/*
    Author    : MishkatIT
    Created   : Monday 01-07-2024 02:01:24
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

    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << -1 << '\n';
    } else {
        cout << max(a.size(), b.size()) << '\n';
    }
    return 0;
}