/*
    Author    : MishkatIT
    Created   : Thursday 16-05-2024 19:48:31
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int ans = 0;
        int l = v[0] - x;
        int r = v[0] + x;
        for (int i = 0; i < n; i++) {
            int curL = v[i] - x;
            int curR = v[i] + x;
            if (r < curL || curR < l) {
                ans++;
                l = v[i] - x;
                r = v[i] + x;
            } else {
                l = max(l, curL);
                r = min(r, curR);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}