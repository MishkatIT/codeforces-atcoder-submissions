/*
    Author    : MishkatIT
    Created   : Sunday 06-06-2024
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
const ll N = 55;
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
        vector<int> k(n);
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }

        ll low = 1, high = 1e9;
        ll ans = -1;
        while (low <= high) {
            ll mid = (low + high) / 2;
            vector<ll> a(n);
            for (int i = 0; i < n; i++) {
                a[i] = mid / k[i];
            }
            ll totBet = accumulate(a.begin(), a.end(), 0LL);
            bool possible = true;
            for (int i = 0; i < n; i++) {
                if (a[i] * k[i] <= totBet) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (ans == -1) {
            cout << -1 << '\n';
        } else {
            vector<ll> a(n);
            for (int i = 0; i < n; i++) {
                a[i] = ans / k[i];
            }
            for (int i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }
            cout << a[n - 1] << '\n';
        }
    }
    return 0;
}