/*
    Author    : MishkatIT
    Created   : Tuesday 14-05-2024 23:13:49
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }
        for (int i = 30; i >= 0; i--) {
            int cur = (1 << i);
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                cnt += ((v[j] & cur) != 0);
            }
            if (n - cnt <= k) {
                for (int j = 0; j < n; j++) {
                    if ((v[j] & cur) == 0) {
                        k--;
                        v[j] |= cur;
                    }
                }
            }
        }

        int ans = v[0];
        for (int i = 0; i < n; i++) {
            ans &= v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}