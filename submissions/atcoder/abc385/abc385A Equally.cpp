/*
    Author    : MishkatIT
    Created   : Saturday 21-12-2024 18:00:19
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

    int n = 3;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    bool ok = false;
    if (v[0] + v[1] == v[2]) ok = true;
    if (v.front() == v.back()) ok = true;
    cout << (ok ? "Yes" : "No") << '\n';

    return 0;
}