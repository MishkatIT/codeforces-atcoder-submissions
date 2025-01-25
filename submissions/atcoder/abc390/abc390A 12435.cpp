/*
    Author    : MishkatIT
    Created   : Saturday 25-01-2025 19:53:38
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

    int n = 5;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int cnt = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (v[i] > v[i + 1]) {
            swap(v[i], v[i + 1]);
            cnt++;
        }
    }
    cout << (cnt == 1? "Yes" : "No") << '\n';
    return 0;
}