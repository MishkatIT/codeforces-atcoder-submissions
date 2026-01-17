/*
    Author    : MishkatIT
    Created   : Sunday 18-05-2025 20:11:14
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

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= 50; i++) {
        for (int j = 0; j < n; j++) {
            if (v[j].size() == i) {
                cout << v[j];
                break;
            }
        }
    }

    return 0;
}