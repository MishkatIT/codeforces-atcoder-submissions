/*
    Author    : MishkatIT
    Created   : Wednesday 01-05-2024 13:39:25
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
        for (auto& i : a) {
            cin >> i;
        }
        vector<int> b(n);
        for (auto& i : b) {
            cin >> i;
        }
        int i = 0, j = 0;
        int ans = 0;
        while (j < n) {
            if (a[i] > b[j]) {
                ans++;
                j++;
            } else {
                i++;
                j++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}