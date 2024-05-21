/*
    Author    : MishkatIT
    Created   : Wednesday 22-05-2024 00:04:26
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
        for (auto &i : v) {
            cin >> i;
        }

        auto ok = [&](int k) {
            vector<int> original(21);
            for (int i = 0; i < k; i++) {
                for (int b = 0; b <= 20; b++) {
                    original[b] += ((1 << b) & v[i]) != 0;
                }
            }

            vector<int> temp = original;
            for (int i = k; i < n; i++) {
                for (int b = 0; b <= 20; b++) {
                    temp[b] -= ((1 << b) & v[i - k]) != 0;
                    temp[b] += ((1 << b) & v[i]) != 0;
                }
                for (int j = 0; j <= 20; j++) {
                    if ((original[j] > 0) != (temp[j] > 0))
                        return false;
                }
            }
            return true;
        };

        int low = 1, high = n;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (ok(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}