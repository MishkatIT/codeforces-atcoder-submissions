/*
    Author    : MishkatIT
    Created   : Saturday 19-10-2024 18:04:02
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

    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int ans = 1;
    int last = v.front();
    for (int i = 1; i < n; i++) {
        if (v[i] - last >= c) {
            ans++;
            last = v[i];
        }
    }
    cout << ans << '\n';
    return 0;
}