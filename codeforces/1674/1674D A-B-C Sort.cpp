/*
    Author    : MishkatIT
    Created   : Thursday 06-06-2024 02:42:55
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
        for (auto &i : v) {
            cin >> i;
        }
        for (int i = n & 1; i + 1 < n; i += 2) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
            }
        }
        cout << (is_sorted(v.begin(), v.end()) ? "YES" : "NO") << '\n';
    }
    return 0;
}