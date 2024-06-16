/*
    Author    : MishkatIT
    Created   : Monday 17-06-2024 03:11:43
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
        ll n, k;
        cin >> n >> k;
        ll mx;
        if (n & 1) {
            ll x = n - 1;
            mx = x * (x + 1) / 2 - (x / 2) * (x / 2);
        } else {
            mx = (n / 2) * (n / 2);
        }
        mx *= 2;
        if (k > mx || k & 1) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        vector<int> ans(n + 5);
        iota(ans.begin(), ans.end(), 0);
        ll rem = n - 1;
        int l = 1, r = n;
        while (k > 0) {
            if (k > rem * 2) {
                swap(ans[l], ans[r]);
                k -= rem * 2;
                rem -= 2;
                l++, r--;
            } else {
                swap(ans[r], ans[r - k / 2]);
                k = 0;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}