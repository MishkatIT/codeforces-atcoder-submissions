/*
    Author    : MishkatIT
    Created   : Thursday 20-06-2024 00:16:17
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
        ll ans = 0, sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += v[i];
            ans = max(ans, sum);
        }
        cout << ans << '\n';
    }
    return 0;
}