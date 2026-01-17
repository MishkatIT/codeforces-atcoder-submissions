/*
    Author    : MishkatIT
    Created   : Saturday 04-10-2025 18:21:10
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

    int n, q;
    cin >> n >> q;
    vector<int> v(n + 5, 1);
    map<int, int> mp;
    while (q--) {
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        for (int i = x; i > 0; i--) {
            if (!v[i]) break;
            cnt += v[i];
            v[i] = 0;
        }
        v[y] += cnt;
        cout << cnt << '\n';
    }
    return 0;
}