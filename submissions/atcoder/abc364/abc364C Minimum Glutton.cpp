/*
    Author    : MishkatIT
    Created   : Saturday 27-07-2024 18:14:14
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

    ll n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    vector<int> b(n);
    for (auto& i : b) {
        cin >> i;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    auto check = [&](vector<int>& v, ll lim) {
        ll x = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            x += v[i];
            cnt++;
            if (x > lim) return cnt;
        }
        return cnt;
    };

    int ans = check(a, x);
    ans = min(ans, check(b, y));
    cout << ans << '\n';
    return 0;
}