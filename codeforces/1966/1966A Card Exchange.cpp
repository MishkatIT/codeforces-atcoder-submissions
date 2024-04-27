/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 20:40:50
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
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        bool found = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] >= k) found =true;
        }
        if (found) {
            cout << k - 1 << '\n';
        } else {
            cout << n << '\n';
        }

    }
    return 0;
}