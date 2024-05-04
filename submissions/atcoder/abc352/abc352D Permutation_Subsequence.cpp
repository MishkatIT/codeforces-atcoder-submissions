/*
    Author    : MishkatIT
    Created   : Saturday 04-05-2024 19:02:23
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

    int n, k;
    cin >> n >> k;
    vector<int> pos(n + 5);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    set<int> s;
    int mn = inf;
    for (int i = 1; i <= n; i++) {
        s.insert(pos[i]);
        if (i >= k) {
            mn = min(mn, *s.rbegin() - *s.begin());
            s.erase(pos[i - k + 1]);
        }
    }
    cout << mn << '\n';
    return 0;
}