/*
    Author    : MishkatIT
    Created   : Wednesday 08-05-2024 20:49:04
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
        int ans = n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            bool ok = true;
            int tsum = 0;
            int len = 0;
            int tans = 0;
            for (int j = 0; j < n; j++) {
                if (tsum + v[j] <= sum) {
                    tsum += v[j];
                    len++;
                    tans = max(len, tans);
                } else if (tsum == sum) {
                    tsum = v[j];
                    len = 1;
                } else {
                    ok = false;
                    break;
                }
            }
            if (ok && tsum == sum) {
                ans = min(ans, tans);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}