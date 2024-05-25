/*
    Author    : MishkatIT
    Created   : Saturday 25-05-2024 20:35:29
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
        for (int i = 0; i < n + 10; i++) {
            if (is_sorted(v.begin(), v.end())) {
                ok = true;
                break;
            }
            v.push_back(v.front());
            v.erase(v.begin());
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}