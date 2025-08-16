/*
    Author    : MishkatIT
    Created   : Saturday 16-08-2025 18:05:29
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

    int n;
    cin >> n;
    multiset<int> ms;
    while (n--) {
        int type; cin >> type;
        if (type == 1) {
            int x; cin >> x;
            ms.insert(x);
        } else {
            cout << *ms.begin() << '\n';
            ms.erase(ms.begin());
        }
    }

    return 0;
}