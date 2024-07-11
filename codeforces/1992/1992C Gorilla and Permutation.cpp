/*
    Author    : MishkatIT
    Created   : Thursday 11-07-2024 21:27:39
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, k;
        cin >> n >> m >> k;
        int cur = n;
        while (cur > m) {
            cout << cur << ' ';
            cur--;
        }
        for (int i = 1; i <= m; i++) {
            cout << i << ' ';
        }
        cout <<  '\n';
    }
    return 0;
}