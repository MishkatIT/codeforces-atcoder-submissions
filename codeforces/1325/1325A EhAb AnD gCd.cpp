/*
    Author    : MishkatIT
    Created   : Sunday 30-06-2024 16:09:11
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

    int tc;
    cin >> tc;
    while (tc--) {
        int x;
        cin >> x;
        if (x & 1) {
            cout << 1 << ' ' << x - 1 << '\n';
        } else {
            cout << x / 2 << ' ' << x / 2 << '\n';
        }
    }
    return 0;
}