/*
    Author    : MishkatIT
    Created   : Thursday 25-09-2025 01:18:40
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
const int N = 70;
const ll inf = 1e18 + 57;
const ll linf = 1e18;


ll nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r; 
    ll res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}


#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, k;
    cin >> a >> b >> k;
    string ans;
    while (a > 0 && b > 0) {
        ll cur = nCr(a + b - 1, a - 1);
        if (k <= cur) {
            ans += 'a';
            a--;
        } else {
            k -= cur;
            ans += 'b';
            b--;
        }
    }
    ans.append(a, 'a');
    ans.append(b, 'b');
    cout << ans << '\n';
    return 0;
}