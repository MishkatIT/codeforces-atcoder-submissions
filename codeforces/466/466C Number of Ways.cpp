/*
    Author    : MishkatIT
    Created   : Tuesday 04-06-2024 23:11:50
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
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    if (sum % 3) {
        cout << 0 << '\n';
        return 0;
    }

    ll target = sum / 3;
    ll cnt = 0;
    ll cur = 0;
    ll ways = 0;
    for (int i = 0; i < n - 1; i++) {
        cur += v[i];
        if (cur == target * 2) {
            ways += cnt;
        }
        if (cur == target) {
            cnt++;
        }
    }
    cout << ways << '\n';
    return 0;
}