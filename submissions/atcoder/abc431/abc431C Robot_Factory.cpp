/*
    Author    : MishkatIT
    Created   : Saturday 08-11-2025 18:07:44
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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    vector<int> b(m);
    for (auto& i : b) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            ans++;
            i++, j++;
        } else {
            j++;
        }
    }
    cout << (ans >= k ? "Yes" : "No") << '\n';
    return 0;
}