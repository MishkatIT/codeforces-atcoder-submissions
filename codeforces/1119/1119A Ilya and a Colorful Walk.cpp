/*
    Author    : MishkatIT
    Created   : Tuesday 02-07-2024 23:00:59
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
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != v.back()) {
            ans = n - i - 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] != v.front()) {
            ans = max(ans, i);
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}