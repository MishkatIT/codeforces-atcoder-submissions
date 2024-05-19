/*
    Author    : MishkatIT
    Created   : Sunday 19-05-2024 22:26:09
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i] != i) {
                ans &= v[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}