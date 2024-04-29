/*
    Author    : MishkatIT
    Created   : Monday 29-04-2024 20:45:43
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
        string str;
        cin >> str;
        ll ans = 0;
        ll one = 0;
        int n = str.size();
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') one += 1;
            else {
                ans += (one + 1) * (one > 0);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}