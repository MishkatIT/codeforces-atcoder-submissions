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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int>> g(n);
    for (int i = 0; i < n; ++i) cin >> g[i].first >> g[i].second;

    int q; cin >> q;
    while (q--) {
        int t, d; cin >> t >> d;
        --t;
        int qMod = g[t].first, rMod = g[t].second;
        int rem = d % qMod, nextDay;

        if (rem == rMod) nextDay = d;
        else if (rMod >= rem) nextDay = d + (rMod - rem);
        else nextDay = d + (qMod - rem + rMod);
        cout << nextDay << '\n';
    }
    return 0;
}