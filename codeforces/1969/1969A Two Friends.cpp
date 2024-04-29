/*
    Author    : MishkatIT
    Created   : Monday 29-04-2024 20:34:28
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
        vector<int> v(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int ans = 3;
        for (int i = 1; i <= n; i++) {
            if (v[v[i]] == i) {
                ans = 2;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}