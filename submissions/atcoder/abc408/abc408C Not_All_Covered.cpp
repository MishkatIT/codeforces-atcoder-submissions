/*
    Author    : MishkatIT
    Created   : Saturday 31-05-2025 18:19:35
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
    vector<int> dif(n + 5);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        dif[a]++;
        dif[b + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        dif[i] += dif[i - 1];
    }
    int ans = inf;
    for (int i = 1; i <= n; i++) {
        ans = min(ans, dif[i]);
    }
    cout << ans << '\n';
    return 0;
}