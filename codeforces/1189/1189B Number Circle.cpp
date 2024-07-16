/*
    Author    : MishkatIT
    Created   : Tuesday 16-07-2024 23:18:46
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    swap(v[n - 1], v[n - 2]);
    if (v[n - 3] + v[n - 1] > v[n - 2]) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++) {
            cout << v[i] << " \n"[i == n - 1];
        }
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}