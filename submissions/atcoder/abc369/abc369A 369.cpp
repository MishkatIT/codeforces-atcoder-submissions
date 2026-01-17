/*
    Author    : MishkatIT
    Created   : Saturday 31-08-2024 18:03:57
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

    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 1 << '\n';
    } else if (abs(a - b) == 2) {
        cout << 3 << '\n';
    } else {
        if (abs(a - b) & 1) {
            cout << 2 << '\n';
        } else {
            cout << 3 << '\n';
        }
    }

    return 0;
}