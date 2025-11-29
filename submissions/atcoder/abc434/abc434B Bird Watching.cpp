/*
    Author    : MishkatIT
    Created   : Saturday 29-11-2025 18:07:56
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

    int tc = 1;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        map<int, vector<int>> mp;
        while (n--) {
            int x, y;
            cin >> x >> y;
            mp[x].push_back(y);
        }
        cout << fixed << setprecision(20);
        for (int i = 1; i <= m; i++) {
            ld sum = accumulate(mp[i].begin(), mp[i].end(), 0LL);
            cout << sum / (int)mp[i].size() << '\n';
        }
    }
    return 0;
}