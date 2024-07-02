/*
    Author    : MishkatIT
    Created   : Wednesday 03-07-2024 00:55:37
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

    string str;
    cin >> str;
    int n = str.size();
    if (n & 1) {
        int ans = n / 2 + (find(str.begin() + 1, str.end(), '1') != str.end());
        cout << ans << '\n';
    } else {
        cout << n / 2 << '\n';
    }
    return 0;
}