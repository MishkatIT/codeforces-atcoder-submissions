/*
    Author    : MishkatIT
    Created   : Sunday 07-07-2024 16:33:13
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        bool ok = false;
        for (int i = 0; i + 1 < n; i++) {
            if (abs(v[i] - (v[i + 1])) > 1) {
                cout << "YES" << '\n';
                cout << i + 1 << ' ' << i + 2 << '\n';
                ok = true;
                break;
            }
        }
        if(!ok) {
            cout << "NO" << '\n';
        }
    }
    return 0;
}