/*
    Author    : MishkatIT
    Created   : Saturday 01-03-2025 18:00:35
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

    int tc = 1;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        bool ok = true;
        for (int i = 0; i + 1 < n; i++) ok &= (v[i] < v[i + 1]);
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}