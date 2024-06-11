/*
    Author    : MishkatIT
    Created   : Tuesday 11-06-2024 20:33:54
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
        string a, b;
        cin >> a >> b;
        swap(a.front(), b.front());
        cout << a << ' ' << b << '\n';
    }
    return 0;
}