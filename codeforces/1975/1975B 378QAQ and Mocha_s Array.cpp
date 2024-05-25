/*
    Author    : MishkatIT
    Created   : Saturday 25-05-2024 21:33:13
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
        set<int> x(v.begin(), v.end());
        if (x.size() <= 2) {
            cout << "YES" << '\n';
            continue;
        }
        auto it = x.begin();
        int f = *it;
        while (it != x.end() && *it % f == 0) {
            it++;
        }
        int s;
        if (it == x.end()) {
            s = f;
        } else {
            s = *it;
        }
        bool ok = true;
        for (auto& i : x) {
            if (i % f != 0 && i % s != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}