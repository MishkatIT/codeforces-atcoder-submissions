/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 17:09:42
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        vector<int> b(n + 1);
        for (auto& i : b) cin >> i;
        int xtra = inf;
        ll ans = 0;
        bool between = false;
        for (int i = 0; i < n; i++) {
            int x = a[i], y = b[i];
            if (x > y) swap(x, y);
            if (x <= b.back() && b.back() <= y) between = true;
            xtra = min(xtra, abs(b.back() - a[i]));
            xtra = min(xtra, abs(b.back() - b[i]));
            ans += abs(a[i] - b[i]);
        }
        if (between) ans += 1;
        else ans += xtra + 1;
        cout << ans << '\n';
    }
    return 0;
}