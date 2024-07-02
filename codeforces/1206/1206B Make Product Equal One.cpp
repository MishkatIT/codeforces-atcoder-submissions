/*
    Author    : MishkatIT
    Created   : Tuesday 02-07-2024 22:49:14
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll ans = 0;
    for (auto& i : v) {
        if (i > 1) {
            ans += i - 1;
            i = 1;
        } else if (i < -1) {
            ans += abs(i) - 1;
            i = -1;
        }
    }
    int negOne, zero, posOne;
    negOne = zero = posOne = 0;
    for (auto& i : v) {
        negOne += (i == -1);
        zero += (i == 0);
        posOne += (i == 1);
    }
    if ((negOne & 1) && (zero)) {
        zero--;
        negOne++;
        ans++;
    }
    if (negOne & 1) {
        ans += 2;
    }
    cout << ans + zero << '\n';
    return 0;
}