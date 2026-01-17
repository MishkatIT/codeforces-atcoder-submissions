/*
    Author    : MishkatIT
    Created   : Saturday 17-08-2024 18:53:17
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

    int a, b, c;
    cin >> a >> b >> c;
    bool ok = true;
    while (b != c) {
        if (b == a) ok = false;
        b++;
        b %= 24;
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}