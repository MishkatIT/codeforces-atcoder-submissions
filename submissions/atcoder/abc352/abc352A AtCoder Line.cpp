/*
    Author    : MishkatIT
    Created   : Saturday 04-05-2024 17:58:19
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > c) swap(b, c);
        if ((b <= d && d <= c) || (d == 1) || (d == a)) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    return 0;
}