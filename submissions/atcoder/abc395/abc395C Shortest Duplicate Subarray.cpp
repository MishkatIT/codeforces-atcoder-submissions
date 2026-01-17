/*
    Author    : MishkatIT
    Created   : Saturday 01-03-2025 18:17:45
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    map<int, int> last;
    int ans = inf;
    for (int i = 0; i < n; i++) {
        if (last.count(v[i])) {
            ans = min(ans, i - last[v[i]]);
        }
        last[v[i]] = i;
    }
    cout << (ans == inf ? -1 : ans + 1);
    return 0;
}