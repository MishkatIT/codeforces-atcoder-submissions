/*
    Author    : MishkatIT
    Created   : Saturday 14-12-2024 18:11:22
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

    int n, r;
    cin >> n >> r;
    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        int cur; cin >> cur;
        if (d == 1) {
            if (r >= 1600 && r <= 2799) {
                r += cur;
            }
        } else {
            if (r >= 1200 && r <= 2399) {
                r += cur;
            }
        }
    }
    cout << r << '\n';
    return 0;
}