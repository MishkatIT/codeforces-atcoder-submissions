/*
    Author    : MishkatIT
    Created   : Monday 01-07-2024 01:34:52
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

    int n;
    cin >> n; n *= 2;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    if (v.front() == v.back()) {
        cout << -1 << '\n';
    } else {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " \n"[i == n - 1];
        }
    }
}
