/*
    Author    : MishkatIT
    Created   : Thursday 11-07-2024 21:38:37
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
        int n, m, k;
        cin >> n >> m >> k;
        string str;
        cin >> str;
        int idx = -1;
        bool ok = false;
        int i = 0;
        while (true) {
            for (;i <= min(n - 1, idx + m); i++) {
                if (idx + m >= n) {
                    ok = true;
                    break;
                }
                if (str[i] == 'L') {
                    idx = i;
                }
            }
            if (ok) break;
            // debug(idx);
            --i;
            if (str[i] == 'C') break;
            while (i < n && str[i] == 'W') {
                k--;
                i++;
            }
            if (i >= n && k >= 0) {
                ok = true;
                break;
            }
            if (k < 0 || str[i] == 'C') break;
            idx = i;
        }
        cout << (ok ? "YES" : "NO") << '\n';    
    }
    return 0;
}