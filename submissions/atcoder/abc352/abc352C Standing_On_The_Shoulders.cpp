/*
    Author    : MishkatIT
    Created   : Saturday 04-05-2024 18:29:17
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += v[i].first;
    }
    ans += v.back().second;
    ll finalans = ans;
    for (int i = n - 1; i > 0; i--) {
        ans -= v[i].second;
        ans += v[i].first;
        ans -= v[i - 1].first;
        ans += v[i - 1].second;
        finalans = max(ans, finalans);
    }
    cout << finalans << '\n';
    return 0;
}