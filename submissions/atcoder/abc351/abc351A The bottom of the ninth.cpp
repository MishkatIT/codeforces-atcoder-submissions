/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 18:01:40
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

    int a = 0, b = 0;
    for (int i = 0; i < 9; i++) {
        int x;
        cin >> x;
        a += x;
    }
    for (int i = 0; i < 8; i++) {
        int x;
        cin >> x;
        b += x;
    }
    cout << a - b + 1 << '\n';
    return 0;
}