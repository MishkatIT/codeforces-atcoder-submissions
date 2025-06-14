/*
    Author    : MishkatIT
    Created   : Saturday 14-06-2025 18:03:35
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

    int n, x;
    cin >> x >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<int> temp(x + 5);
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            cout << v[i] << ' ';
            temp[v[i]]++;
        } else {
            int mn = 1000;
            int idx = 1;
            for (int j = 1; j <= x; j++) {
                if (temp[j] < mn) {
                    idx = j;
                    mn = temp[j];
                }
            }
            cout << idx << ' ';
            temp[idx]++;
        }
    }
    return 0;
}