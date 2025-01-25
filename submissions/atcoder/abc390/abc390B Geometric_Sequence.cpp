/*
    Author    : MishkatIT
    Created   : Saturday 25-01-2025 19:55:32
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
    vector<ld> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    if (n == 1) {
        cout << "YES" << '\n';
    } else {
        ld r = v[1] / v[0];
        for (int i = 1; i < n; i++) {
            if (v[i] / v[i - 1] != r) {
                cout << "No" << '\n';
                return 0;
            }
        }
    }
    cout << "Yes" << '\n';
    return 0;
}