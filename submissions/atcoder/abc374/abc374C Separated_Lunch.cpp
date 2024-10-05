/*
    Author    : MishkatIT
    Created   : Saturday 05-10-2024 21:36:06
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
    
    int mx = inf;
    for (int i = 1; i < (1 << 20); i++) { 
        int a = 0, b = 0;
        for (int j = 0; j < n; j++) { 
            if (i & (1 << j)) {
                a += v[j];
            } else {
                b += v[j];
            }
        }
        mx = min(mx, max(a, b));
    }
    cout << mx << '\n';
    return 0;
}