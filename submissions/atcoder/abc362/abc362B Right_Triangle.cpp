/*
    Author    : MishkatIT
    Created   : Saturday 13-07-2024 18:43:41
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

ll binaryExponentiation(ll x, ll n) {
    ll result = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }

        x *= x;
        n >>= 1;
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i].first >> v[i].second;
    }
    int a = binaryExponentiation(v[0].first - v[1].first, 2) + binaryExponentiation(v[0].second - v[1].second, 2);
    int b = binaryExponentiation(v[0].first - v[2].first, 2) + binaryExponentiation(v[0].second - v[2].second, 2);
    int c = binaryExponentiation(v[1].first - v[2].first, 2) + binaryExponentiation(v[1].second - v[2].second, 2);
    bool ok = false;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    if (a + b == c) ok = true;
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}