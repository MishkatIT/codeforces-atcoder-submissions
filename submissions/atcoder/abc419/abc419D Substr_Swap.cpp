/*
    Author    : MishkatIT
    Created   : Saturday 16-08-2025 18:31:19
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s, t; cin >> s >> t;
    s = "#" + s;
    t = "#" + t;
    vector<int> dif(n + 5);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        dif[l]++;
        dif[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        dif[i] += dif[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        if (dif[i] & 1) {
            swap(s[i], t[i]);
        }
    }
    s.erase(s.begin());
    cout << s;
    return 0;
}