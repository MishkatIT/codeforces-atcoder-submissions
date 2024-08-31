/*
    Author    : MishkatIT
    Created   : Saturday 31-08-2024 18:11:19
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
    vector<int> l, r;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        char c; cin >> c;
        if (c == 'L') l.push_back(x);
        else r.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i + 1 < l.size(); i++) {
        ans += abs(l[i] - l[i + 1]);
    }
    for (int i = 0; i + 1 < r.size(); i++) {
        ans += abs(r[i] - r[i + 1]);
    }
    cout << ans << '\n';
    return 0;
}